//
//  MainLayoutViewController.swift
//  mychart
//
//  Created by Garnet Health on 6/14/21.
//

import UIKit
import WebKit

class MainLayoutViewController:  UICollectionViewController, WKNavigationDelegate,WKUIDelegate, WPAPIPushNotificationsDelegate, WPAPIPersonManagerDelegate,WPAPIAlertsDelegate{
    var alerts = [] as [IWPAlert]
    var delegateHideNav:ProtocolHideNavigation?
    var currentPatientForAlerts: IWPPatient?
    func didReceive(_ alerts: [IWPAlert]?) {
        self.alerts = alerts!
        self.collectionView?.reloadData()
    }
    
    func setPushNotificationsReturned(with status: WPAPISetPushNotificationsStatusResult) {
        let message: String
        switch(status) {
        case .turnedOn:
            message = "Push Notifications are enabled."
        case .turnedOff:
            message = "Push Notifications are disabled."
        case .failedToTurnOn, .failedToTurnOff, .notSupported:
            message = "Push Notifications status was unchanged."
        @unknown default:
            message = ""
}
        let alert = UIAlertController.init(title: "Toggle Push Notifications", message: message, preferredStyle: UIAlertController.Style.alert)
        let dismissAction = UIAlertAction.init(title: "Dismiss", style: UIAlertAction.Style.cancel, handler: nil)
        alert.addAction(dismissAction)
        self.present(alert, animated: true, completion: nil)
    }
    
    var delegate: MenuDelegate?
   
    init() {
        super.init(collectionViewLayout: MainLayoutViewController.createLayout())
    }
   
    static func createLayout() -> UICollectionViewCompositionalLayout {
        return UICollectionViewCompositionalLayout { (sectionNumber, env) -> NSCollectionLayoutSection? in
            let screenSize = UIScreen.main.bounds
            let screenWidth = screenSize.width
            let screenHeight = screenSize.height
            let topBannerHeight = screenHeight * 0.211
            let topCardHeight = screenHeight * 0.20
            let longCardHeight = screenHeight * 0.27
            let mainCardHeight = screenHeight * 0.35
            if (screenWidth <= 380){
                let topCardHeight = screenHeight * 0.24
            }
            if sectionNumber == 0 {
                let item = NSCollectionLayoutItem(layoutSize: .init(widthDimension: .fractionalWidth(1), heightDimension: .fractionalHeight(1)))
                item.contentInsets.trailing = 4
//                item.contentInsets.bottom = 16
                
                let group = NSCollectionLayoutGroup.horizontal(layoutSize: .init(widthDimension: .fractionalWidth(1), heightDimension: .absolute(topBannerHeight)), subitems: [item])
                let section = NSCollectionLayoutSection(group: group)
                
                section.orthogonalScrollingBehavior = .paging
                
                return section
            } else if sectionNumber == 1 {
                
                let item = NSCollectionLayoutItem(layoutSize: .init(widthDimension: .fractionalWidth(0.33), heightDimension: .absolute(topCardHeight)))
                item.contentInsets.trailing = 15
                item.contentInsets.bottom = 30
                let group = NSCollectionLayoutGroup.horizontal(layoutSize: .init(widthDimension: .fractionalWidth(1), heightDimension: .estimated(800)), subitems: [item])
                let section = NSCollectionLayoutSection(group: group)
                section.contentInsets.leading = 16
                
                section.boundarySupplementaryItems = [
                    .init(layoutSize: .init(widthDimension: .fractionalWidth(1), heightDimension: .absolute(topCardHeight)), elementKind: categoryHeaderId, alignment: .topLeading)
                    
                ]
                section.contentInsets.top = (45 ) + 10
                
                return section
            } else if sectionNumber == 2 {
                let item = NSCollectionLayoutItem.init(layoutSize: .init(widthDimension: .fractionalWidth(1), heightDimension: .fractionalHeight(1)))
                item.contentInsets.leading = 16
                let group = NSCollectionLayoutGroup.horizontal(layoutSize: .init(widthDimension: .fractionalWidth(0.95), heightDimension: .absolute(longCardHeight)), subitems: [item])
                let section = NSCollectionLayoutSection(group: group)
                section.boundarySupplementaryItems = [
                    .init(layoutSize: .init(widthDimension: .fractionalWidth(1), heightDimension: .absolute(650)), elementKind: VerticleScrollHeaderId, alignment: .topLeading)
                    
                ]
                section.orthogonalScrollingBehavior = .continuous
                section.contentInsets.leading = 0
                section.contentInsets.top = 230
                return section
            } else {
                let item = NSCollectionLayoutItem(layoutSize: .init(widthDimension: .fractionalWidth(0.5), heightDimension: .absolute(mainCardHeight)))
                item.contentInsets.bottom = 16
                item.contentInsets.trailing = 16
                let group = NSCollectionLayoutGroup.horizontal(layoutSize: .init(widthDimension: .fractionalWidth(1), heightDimension: .estimated(1000)), subitems: [item])
                let section = NSCollectionLayoutSection(group: group)
                section.boundarySupplementaryItems = [
                    .init(layoutSize: .init(widthDimension: .fractionalWidth(1), heightDimension: .absolute(1100)), elementKind: bottomSectionHeaderId, alignment: .topLeading)
                    
                ]
                section.contentInsets = .init(top: 32, leading: 16, bottom: 0, trailing: 0)
                section.contentInsets.top = 160
                return section
            }
        }
    }
    
    override func collectionView(_ collectionView: UICollectionView, viewForSupplementaryElementOfKind kind: String, at indexPath: IndexPath) -> UICollectionReusableView {
        if (indexPath.section == 2){
            let header = collectionView.dequeueReusableSupplementaryView(ofKind: kind, withReuseIdentifier: SmalllongCardId, for: indexPath)
            
            return header
        }else if (indexPath.section == 3){
            let header = collectionView.dequeueReusableSupplementaryView(ofKind: kind, withReuseIdentifier: MainBottomSectionId, for: indexPath)
            
            return header
        }else{
            let header = collectionView.dequeueReusableSupplementaryView(ofKind: kind, withReuseIdentifier: headerId, for: indexPath)
            
            return header
        }
    }
    
    override func collectionView(_ collectionView: UICollectionView, didSelectItemAt indexPath: IndexPath) {
        if (indexPath.section == 0){
            if (indexPath.item == 0){
                MyChartVcs(Index: 20)
            }else if (indexPath.item == 1){
                MyChartVcs(Index: 23)
            }else if (indexPath.item == 2){
                MyChartVcs(Index: 24)
            }
        }else if (indexPath.section == 1){
            if (indexPath.item == 0){
                MyChartVcs(Index: 1)
            }else if (indexPath.item == 1){
                MyChartVcs(Index: 2)
            }else if (indexPath.item == 2){
                MyChartVcs(Index: 17)
            }else if (indexPath.item == 3){
                MyChartVcs(Index: 22)
            }else if (indexPath.item == 4){
                MyChartVcs(Index: 12)
            }else if (indexPath.item == 5){
                MyChartVcs(Index: 3)
            }
        }else if (indexPath.section == 2){
            if (indexPath.item == 0){
                MyChartVcs(Index: 21)
            }else if (indexPath.item == 1){
                MyChartVcs(Index: 17)
            }else if (indexPath.item == 2){
                MyChartVcs(Index: 18)
            }else if (indexPath.item == 3){
                MyChartVcs(Index: 19)
            }
        }else if (indexPath.section == 3){
            if (indexPath.item == 0){
                MyChartVcs(Index: 10)
            }else if (indexPath.item == 1){
                MyChartVcs(Index: 6)
            }else if (indexPath.item == 2){
                MyChartVcs(Index: 0)
            }else if (indexPath.item == 3){
                MyChartVcs(Index: 12)
            }else if (indexPath.item == 4){
                MyChartVcs(Index: 15)
            }else if (indexPath.item == 5){
                MyChartVcs(Index: 16)
            }else if (indexPath.item == 6){
                MyChartVcs(Index: 3)
            }else if (indexPath.item == 7){
                MyChartVcs(Index: 25)
            }else if (indexPath.item == 8){
                let vc = UIStoryboard.init(name: "Main", bundle: Bundle.main).instantiateViewController(withIdentifier: "search2")
                self.navigationController?.pushViewController(vc, animated: true)
            }else if (indexPath.item == 9){
                MyChartVcs(Index: 4)
            }
        }
    }
    
    let headerId = "headerId"
    static let categoryHeaderId = "categoryHeaderId"
    static let VerticleScrollHeaderId = "VerticleScrollHeaderId"
    static let bottomSectionHeaderId = "bottomSectionHeaderId"
    override func numberOfSections(in collectionView: UICollectionView) -> Int {
        4
    }
    
    override func collectionView(_ collectionView: UICollectionView, numberOfItemsInSection section: Int) -> Int {
        if section == 0 {
            return 3
        }else if section == 1{
            return 6
        }else if section == 2{
            return 4
        }
        return 10
    }
    
    override func collectionView(_ collectionView: UICollectionView, cellForItemAt indexPath: IndexPath) -> UICollectionViewCell {
        
        if indexPath.section == 0 {
            let cell = collectionView.dequeueReusableCell( withReuseIdentifier: bannerId, for: indexPath) as! MainPageSection2Cells
            if (indexPath.item == 0){
                cell.imageView.image = UIImage(named: "banner")
            }else if indexPath.item == 1{
                cell.imageView.image = UIImage(named: "mc")
            }else if indexPath.item == 2{
                cell.imageView.image = UIImage(named: "pcare")
            }
            return cell
        }else if indexPath.section == 1 {
            let cell = collectionView.dequeueReusableCell( withReuseIdentifier: testID, for: indexPath) as! test
            if (indexPath.item == 0){
                cell.imageView.image = UIImage(named: "MCIcon")
                cell.label.text = "My Chart"
            }else if indexPath.item == 1{
                cell.imageView.image = UIImage(named: "SpringboardBilling")
                cell.label.text = "Pay My Bill"
            }else if indexPath.item == 2{
                cell.imageView.image = UIImage(named: "SpringboardOnMyWay")
                cell.label.text = "Locations"
            }else if indexPath.item == 3{
                cell.imageView.image = UIImage(named: "telemed")
                cell.label.text = "Telemed"
            }else if indexPath.item == 4{
                cell.imageView.image = UIImage(named: "SpringboardMedications")
                cell.label.text = "Medications"
            }else if indexPath.item == 5{
                cell.imageView.image = UIImage(named: "SpringboardTestResults")
                cell.label.text = "Test Results"
            }
            
            return cell
        }else if  indexPath.section == 2 {
            let cell = collectionView.dequeueReusableCell( withReuseIdentifier: SmalllongCardId, for: indexPath) as! SmallLongCardView
            var check = "N"
           
            if (indexPath.item == 0){
                cell.image.image = UIImage(named: "logo")
                
                cell.topLabel.text = "Welcome to Garnet Health"
                cell.bottomLabel.text = "Swipe right to see other features in our App!"
            }else if indexPath.item == 1{
                cell.image.image = UIImage(named: "SpringboardOnMyWay")
                
                cell.topLabel.text = "Garnet Health Locations"
                cell.bottomLabel.text = "View and get directions to all of our facilities"
            }else if indexPath.item == 2{
                cell.image.image = UIImage(named: "news")
                
                cell.topLabel.text = "Garnet Health News and Blogs"
                cell.bottomLabel.text = "Get the lastest news of Garnet Health"
            }else if indexPath.item == 3{
                cell.image.image = UIImage(named: "SpringboardAppointments")
                
                cell.topLabel.text = "Garnet Health Find a Doc"
                cell.bottomLabel.text = "Schedule an Appointment with your Doctor"
            }
            return cell
        }else if  indexPath.section == 3 {
            let cell = collectionView.dequeueReusableCell( withReuseIdentifier: MainBottomSectionId, for: indexPath) as! MainBottomSectionCards
            if (indexPath.item == 0){
                cell.imageView.image = UIImage(named: "SpringboardHealthSummary")
                cell.topLabel.text = "Health Summary"
            }else if indexPath.item == 1{
                cell.imageView.image = UIImage(named: "SpringboardDocumentCenter")
                cell.topLabel.text = "Document Center"
            }else if indexPath.item == 2{
                cell.imageView.image = UIImage(named: "SpringboardAppointments")
                cell.topLabel.text = "Appointments"
            }else if indexPath.item == 3{
                cell.imageView.image = UIImage(named: "SpringboardMedications")
                cell.topLabel.text = "Medications"
            }else if indexPath.item == 4{
                cell.imageView.image = UIImage(named: "SpringboardQuestionnaires")
                cell.topLabel.text = "Questionnaires"
            }else if indexPath.item == 5{
                cell.imageView.image = UIImage(named: "SpringboardShareEverywhere")
                cell.topLabel.text = "Share Everywhere"
            }else if indexPath.item == 6{
                cell.imageView.image = UIImage(named: "SpringboardTestResults")
                cell.topLabel.text = "Test Results"
            }else if indexPath.item == 7{
                cell.imageView.image = UIImage(systemName: "info")
                cell.topLabel.text = "About"
            }else if indexPath.item == 8{
                cell.imageView.image = UIImage(systemName:  "magnifyingglass")
                cell.topLabel.text = "Search"
            }else if indexPath.item == 9{
                cell.imageView.image = UIImage(named: "SpringboardSettings")
                cell.topLabel.text = "Settings"
            }
            return cell
        }else{
            let cell = collectionView.dequeueReusableCell(withReuseIdentifier: cellId, for: indexPath) as! CollectionViewCellGernal
                cell.backgroundColor = .red
                return cell
        }
        
        
    }
    
    private func setupLeftNavItem() {
        
        let followButton = UIButton(type: .system)
        followButton.setImage(UIImage(systemName:  "line.horizontal.3"), for: .normal)
        followButton.frame = CGRect(x: 0, y: 0, width: 34, height: 34)
        followButton.contentMode = .scaleAspectFit
        followButton.tintColor = .white
        followButton.addTarget(self, action: #selector(handleMenu), for: .touchUpInside)
        navigationItem.leftBarButtonItem = UIBarButtonItem(customView: followButton)
        
    }
  
    func pushNotificationsReturned(with status: WPAPIPushNotificationsStatus) {
        let message, actionString : String
        if(status == WPAPIPushNotificationsStatus.on) {
            message = "Push Notifications are currently enabled. Turn them off?"
            actionString = "Turn Off"
        }
        else if(status == WPAPIPushNotificationsStatus.off) {
            message = "Push Notifications are currently disabled. Turn them on?"
            actionString = "Turn On"
        }
        else {
            message = "Push Notifications are not supported."
            actionString = ""
        }
        let alert = UIAlertController.init(title: "Toggle Push Notifications", message: message, preferredStyle: UIAlertController.Style.alert)
        let dismissAction = UIAlertAction.init(title: "Dismiss", style: UIAlertAction.Style.cancel, handler: nil)
        let toggleAction = UIAlertAction.init(title: actionString, style: UIAlertAction.Style.default) { (UIAlertAction) in
            if(status == WPAPIPushNotificationsStatus.on) {
                WPAPIAccountSettings.setPushNotificationsStatusWith(self, enable: false)
            }
            else {
                WPAPIAccountSettings.setPushNotificationsStatusWith(self, enable: true)
            }
        }
        alert.addAction(dismissAction)
        alert.addAction(toggleAction)
        self.present(alert, animated: true, completion: nil)
    }
    @objc func displayAlertForNonECGPDF() {
        let alert = UIAlertController(title: "Unsupported PDF", message:"You can only share PDFs that contain ECG recordings from Apple Health. Sharing other PDFs is not supported at this time.", preferredStyle: .alert)
        let cancelAction = UIAlertAction(title: "OK", style: .default, handler: nil)
        alert.addAction(cancelAction)
        self.present(alert, animated: true, completion: nil)
    }
    @objc func handleMenu(){
            delegate?.menuHandler(index: -1)
     }
    
    @objc func wasForceLoggedOut() {
        self.navigationController?.dismiss(animated: false, completion: {})
        _ = self.navigationController?.popToRootViewController(animated: true)
    }
    @objc func alertsRefreshed(notification: Notification) {
        if let patient:IWPPatient = WPAPIAlerts.getPatientFromAlertsInvalidatedNotification(notification) {
            //Reload alerts only if the ones for the current patient are invalidated
            if (patient.accountID == self.currentPatientForAlerts?.accountID) {
                WPAPIAlerts.getFor(patient, with: self)
            }
        }
    }
    private let cellId = "cellId"
    private let bannerId = "bannerId"
    private let testID = "testID"
    private let SmalllongCardId = "SmallCardId"
    private let MainBottomSectionId = "MainBottomSectionId"
    override func viewDidLoad() {
        setupNavigationBarItems()
        setupLeftNavItem()
        super.viewDidLoad()
        let notificationCenter = UNUserNotificationCenter.current()
        // Hello Patient needs this authorization in order to display local notifications when the app is not in foreground.
        notificationCenter.requestAuthorization(options: [.alert, .sound, .badge]) { (granted, error) in }
        
        //Sign up for custom logout notifications to force user out after inactivity
        NotificationCenter.default.addObserver(self, selector: #selector(self.wasForceLoggedOut), name: NSNotification.Name(rawValue: WPAPINotificationUserForceLoggedOut), object: nil)
        
        NotificationCenter.default.addObserver(self, selector: #selector(alertsRefreshed(notification:)), name: NSNotification.Name(rawValue: WPAPINotificationPatientAlertsInvalidated), object: nil)
        
        
       
        
        collectionView.backgroundColor = .white
        navigationItem.title = "Home"
        collectionView.register(test.self, forCellWithReuseIdentifier: testID)
        collectionView.register(CollectionViewCellGernal.self, forCellWithReuseIdentifier: cellId)
        collectionView.register(MainBottomSectionCards.self, forCellWithReuseIdentifier: MainBottomSectionId)
        collectionView.register(MainPageSection2Cells.self, forCellWithReuseIdentifier: bannerId)
        collectionView.register(SmallLongCardView.self, forCellWithReuseIdentifier: SmalllongCardId)
        collectionView.register(VerticleScrollHeader.self, forSupplementaryViewOfKind: MainLayoutViewController.VerticleScrollHeaderId, withReuseIdentifier: SmalllongCardId)
        collectionView.register(Header.self, forSupplementaryViewOfKind: MainLayoutViewController.categoryHeaderId, withReuseIdentifier: headerId)
        collectionView.register(BottomSectionHeader.self, forSupplementaryViewOfKind: MainLayoutViewController.bottomSectionHeaderId, withReuseIdentifier: MainBottomSectionId)
    }
    
    required init?(coder: NSCoder) {
        fatalError("init(coder:) has not been implemented")
    }
    override func viewDidAppear(_ animated: Bool) {
       
        
    }
    
    
        
        
    
}
class BottomSectionHeader: UICollectionReusableView{
    let labelTop = UILabel()
    let labelBottom = UILabel()
    let BottomLabel = UILabel()
    let mainLogo = UIImageView(image: UIImage(named: "logo"))
    let mainLogo1 = UIImageView(image: UIImage(named: "logo"))
    var WebView: WKWebView!
    let button = UIButton()
    override init(frame: CGRect) {
        super.init(frame: frame)
        let screenSize = UIScreen.main.bounds
        let screenWidth = screenSize.width
        let screenHeight = screenSize.height
        mainLogo1.frame.origin.y = 100
        mainLogo1.frame.origin.x = (frame.width - 50)/2
        mainLogo1.frame.size.width = 50
        mainLogo1.frame.size.height = 50
        
        labelTop.text = "Garnet Health is here with you and for you."
        labelTop.frame.origin.x = 0
        labelTop.frame.size.width = frame.width - 32
        labelTop.frame.size.height = 100
        labelTop.frame.origin.y =  150;
        labelTop.font = UIFont.boldSystemFont(ofSize: 32)
        labelTop.textAlignment = .center
        labelTop.textColor = .black
        labelTop.numberOfLines = 3
        labelTop.lineBreakMode = .byWordWrapping
        
        labelBottom.text = "We changed names to reflect that we are a unified health system delivering exceptional care throughout the region. The providers, services, facilities and appointment locations you are accustomed to, and your health records, have not changed. We are still the same independently-run healthcare organization on which you rely."
        labelBottom.frame.origin.x = 0
        labelBottom.frame.size.width = frame.width - 32
        labelBottom.frame.size.height = 200
        labelBottom.frame.origin.y = labelTop.frame.origin.y + labelTop.frame.height + 10;
        labelBottom.font = UIFont.systemFont(ofSize: 18)
        labelBottom.textAlignment = .center
        labelBottom.textColor = .black
        labelBottom.numberOfLines = 15
        labelBottom.lineBreakMode = .byWordWrapping
        
        WebView = WKWebView()
        WebView.frame  = CGRect(x: 10, y: labelBottom.frame.origin.y + labelBottom.frame.height + 30, width: UIScreen.main.bounds.width - 45, height: screenHeight * 0.32)
        let myURL = URL(string: "https://www.youtube.com/embed/F_PV0x6CmKQ")
        let myRequest = URLRequest(url: myURL!)
        WebView.load(myRequest)
        WebView.layer.borderColor   = UIColor.darkGray.cgColor
        WebView.layer.shadowColor = UIColor.black.cgColor
        WebView.layer.shadowOffset = CGSize(width: 0.3, height: 6.0)
        WebView.layer.shadowRadius = 8
        WebView.layer.shadowOpacity = 0.45
        
        
        button.frame.origin.y = WebView.frame.origin.y + WebView.frame.height + 30;
        button.frame.origin.x = (frame.width * 0.10)
        button.frame.size.width = (frame.width * 0.80);
        button.frame.size.height = 50
        button.layer.cornerRadius = 10
        button.clipsToBounds = false
        button.layer.borderColor   = UIColor.darkGray.cgColor
        button.layer.shadowColor = UIColor.black.cgColor
        button.layer.shadowOffset = CGSize(width: 0.3, height: 6.0)
        button.layer.shadowRadius = 8
        button.layer.shadowOpacity = 0.45
        button.setTitle("Learn More", for: .normal)
        button.setTitleColor(.white, for: .normal)
        button.setTitleColor(.gray, for: .selected)
        button.backgroundColor = UIColor(displayP3Red: 92/255, green: 10/255, blue: 58/255, alpha: 255/255)
        button.addTarget(self, action: #selector(toGarnet), for: .touchUpInside)
        
        mainLogo.frame.origin.y = button.frame.origin.y + button.frame.height + 120
        mainLogo.frame.origin.x = (frame.width - 40)/2
        mainLogo.frame.size.width = 40
        mainLogo.frame.size.height = 40
        BottomLabel.text = "Additional Services"
        BottomLabel.frame.origin.x = 4
        BottomLabel.frame.size.width = frame.width - 32
        BottomLabel.frame.size.height = 100
        BottomLabel.frame.origin.y =  mainLogo.frame.origin.y + mainLogo.frame.height + 10;
        BottomLabel.font = UIFont.boldSystemFont(ofSize: 38)
        BottomLabel.textAlignment = .center
        BottomLabel.textColor = .black
        BottomLabel.numberOfLines = 3
        BottomLabel.lineBreakMode = .byWordWrapping
        BottomLabel.layer.shadowColor = UIColor.black.cgColor
        BottomLabel.layer.shadowOffset = CGSize(width: 0.3, height: 6.0)
        BottomLabel.layer.shadowRadius = 8
    BottomLabel.layer.shadowOpacity = 0.45
        
        addSubview(mainLogo1)
        addSubview(labelTop)
        addSubview(labelBottom)
        addSubview(WebView)
        addSubview(mainLogo)
        addSubview(BottomLabel)
    }
    override func layoutSubviews() {
        super.layoutSubviews()
    }
   
    required init?(coder: NSCoder) {
        fatalError("init(coder:) has not been implemented")
    }
    @objc func toGarnet(){
        
            let vc = ToGarnetViewController()
        
        
     }
}

class Header: UICollectionReusableView {
    let label = UILabel()
    let screenSize = UIScreen.main.bounds
    let imageView = UIImageView(image: UIImage(named: "garnet"))
    override init(frame: CGRect) {
        super.init(frame: frame)
        imageView.frame.origin.y = 30
        imageView.frame.origin.x = (25)
        imageView.frame.size.width =  (frame.width - 60)
        imageView.frame.size.height = screenSize.height * 0.150
        label.text = ""
        if (screenSize.width > 450){
            imageView.frame.size.height = screenSize.height * 0.180
        }
        if (screenSize.width >= 800){
            imageView.frame.size.height = screenSize.height * 0.155
            imageView.frame.size.width =  (frame.width - 200)
            imageView.frame.origin.x = (90)
        }
        addSubview(label)
        addSubview(imageView)
    }
    override func layoutSubviews() {
        super.layoutSubviews()
        label.frame = bounds
    }
    
    required init?(coder: NSCoder) {
        fatalError("init(coder:) has not been implemented")
    }
}

class VerticleScrollHeader: UICollectionReusableView {
    let label = UILabel()
    let imageView = UIImageView(image: UIImage(named: "homePageBaner"))
    let mainLogo = UIImageView(image: UIImage(named: "logo"))
    let button = UIButton()
    let screenSize = UIScreen.main.bounds
    override init(frame: CGRect) {
        super.init(frame: frame)
        
        mainLogo.frame.origin.y = 50
        mainLogo.frame.origin.x = (frame.width - 50)/2
        mainLogo.frame.size.width = 50
        mainLogo.frame.size.height = 50
        
        imageView.frame.origin.y = 65 +  mainLogo.frame.size.height
        imageView.frame.origin.x = frame.origin.x
        imageView.frame.size.width = frame.width
        imageView.frame.size.height = screenSize.height * 0.30
        imageView.layer.borderColor   = UIColor.darkGray.cgColor
        imageView.layer.shadowColor = UIColor.black.cgColor
        imageView.layer.shadowOffset = CGSize(width: 0.3, height: 6.0)
        imageView.layer.shadowRadius = 8
        imageView.layer.shadowOpacity = 0.45
       
        label.text = "We are dedicated to providing you and your family exceptional care and excellent patient experiences. Our health system offers three hospital locations and a growing medical practice that provides care throughout Orange and Sullivan Counties. At Garnet Health, your health matters most. Whether you require emergency care, urgent care, a doctor’s appointment or specialty care, we offer a wide range of inpatient and outpatient services."
        label.frame.origin.x = 5
        label.frame.size.width = frame.width - 10
        label.frame.size.height = 180
        label.frame.origin.y = imageView.frame.origin.y + imageView.frame.height + 30;
        label.font = UIFont.systemFont(ofSize: 17)
        label.textAlignment = .center
        label.textColor = .black
        label.numberOfLines = 15
        label.lineBreakMode = .byWordWrapping
        
        button.frame.origin.y = label.frame.origin.y + label.frame.height + 30;
        button.frame.origin.x = (frame.width * 0.10)
        button.frame.size.width = (frame.width * 0.80);
        button.frame.size.height = 50
        button.layer.cornerRadius = 10
        button.clipsToBounds = false
        button.layer.borderColor   = UIColor.darkGray.cgColor
        button.layer.shadowColor = UIColor.black.cgColor
        button.layer.shadowOffset = CGSize(width: 0.3, height: 6.0)
        button.layer.shadowRadius = 8
        button.layer.shadowOpacity = 0.45
        button.setTitle("Learn More", for: .normal)
        button.setTitleColor(.white, for: .normal)
        button.setTitleColor(.gray, for: .selected)
        button.backgroundColor = UIColor(displayP3Red: 92/255, green: 10/255, blue: 58/255, alpha: 255/255)
        button.addTarget(self, action: #selector(toGarnet), for: .touchUpInside)
        addSubview(mainLogo)
        addSubview(imageView)
        addSubview(label)
        
    }
    override func layoutSubviews() {
        super.layoutSubviews()
        layer.borderColor   = UIColor.darkGray.cgColor
        layer.shadowColor = UIColor.black.cgColor
        layer.shadowOffset = CGSize(width: 0.3, height: 6.0)
        layer.shadowRadius = 8
        layer.shadowOpacity = 0.45
    }
    @objc func toGarnet(){
        if let navigationController = getNavigationController() {
           //the type of currentVC is MyViewController inside the if statement, use it as you want to
            let vc = ToGarnetViewController()
            navigationController.pushViewController(vc, animated: true)
        }
        
     }
    required init?(coder: NSCoder) {
        fatalError("init(coder:) has not been implemented")
    }
}
func getNavigationController() -> UINavigationController? {

    if let navigationController = UIApplication.shared.keyWindow?.rootViewController  {

        return navigationController as? UINavigationController
    }
    return nil
}

