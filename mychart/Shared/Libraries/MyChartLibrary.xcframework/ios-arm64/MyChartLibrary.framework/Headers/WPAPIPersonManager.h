//
//  WPAPIPersonManager.h
//  MyChart
//
//  Copyright © 2019-2021 Epic Systems Corporation. All rights reserved.
//
/**
 Enum representing the various error codes that may be returned via WPAPIPersonManagerDelegate callbacks.

 - WPAPIPersonManagerErrorCodeRequestServerError: indicates that an error has occurred on the server during the operation
 - WPAPIPersonManagerErrorCodeInvalidAccess: indicates that the API cannot be accessed (likely due to server version)
 - WPAPIPersonManagerErrorCodeNicknameTooLong: indicates that the provided nickname is too long (longer than 20 characters)
 - WPAPIPersonManagerErrorCodeInvalidColor: indicates that the provided color was not from the set of available colors
 */
typedef NS_ENUM(NSInteger, WPAPIPersonManagerErrorCode) {
    WPAPIPersonManagerErrorCodeRequestServerError = 1,
    WPAPIPersonManagerErrorCodeInvalidAccess = 2,
    WPAPIPersonManagerErrorCodeNicknameTooLong = 3,
    WPAPIPersonManagerErrorCodeInvalidColor = 4
};

/**
 Error domain for the error returned in the WPAPIPersonManagerDelegate methods
 */
extern NSString * _Nonnull const WPAPIPersonManagerErrorDomain;


/**
 Delegate notified when operations are complete, successfully or otherwise.
 */
@protocol WPAPIPersonManagerDelegate <NSObject>

@optional

/**
 Delegate method invoked when the operation to set a color for a person has completed, successfully or otherwise.
 
 @param person the person for which the color was set
 @param error the error that occurred if the operation failed
 */
- (void)didSetColorForPerson:(nonnull id <IWPPerson>)person withError:(nullable NSError*)error;

/**
 Delegate method invoked when the operation to set a nickname for a person has completed, successfully or otherwise.
 
 @param person the person for which the nickname was set
 @param error the error that occurred if the operation failed
 */
- (void)didSetNicknameForPerson:(nonnull id <IWPPerson>)person withError:(nullable NSError*)error;

/**
 Delegate method invoked when the operation to set a photo for a person has completed, successfully or otherwise.

 @param person the person for which the photo was set
 @param error the error that occurred if the operation failed
 */
- (void)didSetPhotoForPerson:(nonnull id <IWPPerson>)person withError:(nullable NSError*)error;

@end


/**
 APIs for managing people, which includes the user (potentially a patient themselves) and any patients they can access as a proxy. This manager is only supported if the new home page is also being used.
 */
@interface WPAPIPersonManager : NSObject

/**
 Returns the list of people available for the logged in user to access, which includes the user (potentially a patient themselves) and any patients they can access as a proxy.

 @return The list of people that can be accessed.
 */
+ (nonnull NSArray <id <IWPPerson>>*)getPersonList;

/**
 Returns the current person being accessed. All the activities launched will display data for this person, and all APIs invoked will be performed in the context of this person.

 @return The current person being accessed.
 */
+ (nullable id <IWPPerson>)getCurrentPerson;

/**
 Updates the person that is currently being accessed. All the activities launched will display data for this person, and all APIs invoked will be performed in the context of this person.

 @param person the person to set as the current person
 */
+ (void)setCurrentPerson:(nonnull id <IWPPerson>)person;

/**
 Returns the set of colors that can be set for a person.  A color to be set for a person must come from this set.

 @return The set of colors that can be set for a person.
 */
+ (nonnull NSArray *)getAvailableColors;

/**
 Indicates whether or not colors can be set for people.
 
 @return True IFF colors can be set; False otherwise.
 */
+ (BOOL)canSetColors;

/**
 Sets the color for a given person. The color is used to help distinguish which person is being accessed at any given time.

 @param color the color to set for the person
 @param person the person for which the color should be set
 @param delegate the delegate to be notified when the operation is complete, successfully or otherwise, using the delegate method didSetColorForPerson:withError:
 */
+ (void)setColor:(nonnull UIColor*)color forPerson:(nonnull id <IWPPerson>)person
        delegate:(nullable id <WPAPIPersonManagerDelegate>)delegate;

/**
 Indicates whether or not nicknames can be set for people.

 @return True IFF nicknames can be set; False otherwise.
 */
+ (BOOL)canSetNicknames;

/**
 Sets the nickname for a given person. The nickname will be displayed in place of the person's name, with exceptions for clinical content. The length of the nickname should be a maximum of 20 characters, otherwise an error will be thrown. If the provided nickname is nil or empty, the person's name will be set as the nickname.

 @param nickname the nickname to set for the person (20 characters or less), or nil to use the person's name
 @param person the person for which the nickname should be set
 @param delegate the delegate to be notified when the operation is complete, successfully or otherwise, using the delegate method didSetNicknameForPerson:withError:
 */
+ (void)setNickname:(nullable NSString*)nickname forPerson:(nonnull id <IWPPerson>)person
           delegate:(nullable id <WPAPIPersonManagerDelegate>)delegate;

/**
 Indicates whether or not photos can be set for people.
 
 @return True IFF photos can be set; False otherwise.
 */
+ (BOOL)canSetPhotos;

/**
  Sets the photo for a given person. The photo is used to help distinguish which person is being accessed at any given time.  Photos set here may also be used in clinical applications for positive identification (depending on configuration). If the provided photo is nil, the photo for a person will be removed.
 
 @param photo the photo to set for the person, or nil to remove the person's photo
 @param person the person for which the photo should be set
 @param delegate the delegate to be notified when the operation is complete, successfully or otherwise, using the delegate method didSetPhotoForPerson:withError:
 */
+ (void)setPhoto:(nullable UIImage*)photo forPerson:(nonnull id <IWPPerson>)person
        delegate:(nullable id <WPAPIPersonManagerDelegate>)delegate;

@end
