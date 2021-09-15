
#ifndef MYCHARTSETTINGS_H
#define MYCHARTSETTINGS_H

#ifdef WPDEBUG
#define _STRC(value,comment,key) value
#else
#import "WPLocaleInfo.h"
#define _STRC(value,comment,key) (NSLocalizedStringWithDefaultValue((key),@"MyChart",[WPLocaleInfo currentLocale].bundle,value,nil))
#endif

//Only on an iOS device
#define VIDYO_ALLOWED 0
#define VIDEO_ALLOWED (VIDYO_ALLOWED) //Generic Video flag for if we support other vendors
#define HEALTHKIT_ENABLED 0

#ifdef WPDEBUG
    //see GCC_PREPROCESSOR_DEFINITIONS for 'debug'

    #define DEBUG_ERROR        100
    #define DEBUG_WARNING    200
    #define DEBUG_INFO        300
    #define DEBUG_EXTRA        400

    #define MIN_DEBUG_LEVEL 500

    #define DEBUGLG(k, s, ... ) if((k)<MIN_DEBUG_LEVEL) { NSLog( @"<%p %@ (%@:%d)>\n   %@", self, NSStringFromClass([self class]), [[NSString stringWithUTF8String:__FILE__] lastPathComponent], __LINE__, [NSString stringWithFormat:(s), ##__VA_ARGS__] ); }

    #define DEBUGLGSTATIC(k, s, ... ) if((k)<MIN_DEBUG_LEVEL) { NSLog( @"<(%@:%d)>\n   %@", [[NSString stringWithUTF8String:__FILE__] lastPathComponent], __LINE__, [NSString stringWithFormat:(s), ##__VA_ARGS__] ); }

    //#define WPDEBUG_XML

    #ifdef WPDEBUG_XML
        #define DEBUGLG_XML_ASM( s, ... ) NSLog( @"<%p %@:(%d)> %@", self, [[NSString stringWithUTF8String:__FILE__] lastPathComponent], __LINE__, [NSString stringWithFormat:(s), ##__VA_ARGS__] )
    #else
        #define DEBUGLG_XML_ASM( s, ... )
    #endif


#else
    #define DEBUGLG(k, s, ... )
    #define DEBUGLG_XML_ASM( s, ... )
    #define DEBUGLGSTATIC(k, s, ... )
#endif

#endif
