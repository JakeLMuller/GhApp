//
//  Main.swift
//  mychart
//
//  Created by Garnet Health on 6/9/21.
//
import SwiftUI
import UIKit
import WebKit
import Combine

struct SecondView: View {
     var webView: WKWebView!
    init() {
        UITabBar.appearance().barTintColor = .systemBackground
        UINavigationBar.appearance().barTintColor = UIColor(displayP3Red: 92/255, green: 10/255, blue: 58/255, alpha: 255/255)
      
    }
    
    @State var selectedIndex = 0
    @State var shouldShowModal = false
    @State var shouldShowWelcomeModal = true
    
    let tabBarImageNames = ["logo", "SpringboardAppointments", "CustomerLogo", "news", "SpringboardOnMyWay"]
    private func getScale(proxy: GeometryProxy) -> CGFloat {
        var scale: CGFloat = 1
        
        let x = proxy.frame(in: .global).minX
        
        let diff = abs(x - 32)
        if diff < 100 {
            scale = 1 + (100 - diff) / 500
        }
        
        return scale
    }
    var body: some View {
        VStack(spacing: 0) {
            
            ZStack {
                
                Spacer()
                    .sheet(isPresented: $shouldShowModal, content: {
                        getLogInViewController()
                        Button(action: {shouldShowModal.toggle()}, label: {
                            
                        })
                    
                })
                
                switch selectedIndex {
                case 0:
                       PageViewController()
                        //.sheet(isPresented: $shouldShowWelcomeModal, content: {
                           // WelcomeModel(isPresented: self.$shouldShowWelcomeModal)
                       // })
                    
                case 1:
                        AppiontmentViewController()
                    
                case 3:
                    NewsGetViewController()
                    
                case 4:
                    DirectionViewController()
                default:
                    LoginViewController()
                     
                }
                
            }
            
//            Spacer()
            
            Divider()
                .padding(.bottom, 8)
            
        
            
            
//            Spacer()
            
            Divider()
                .padding(.bottom, 8)
            
            HStack {
                ForEach(0..<5) { num in
                    Button(action: {
                        
                        
                        selectedIndex = num
                    }, label: {
                        Spacer()
                        
                        if num == 2 {
                            Image( tabBarImageNames[num])
                                .resizable()
                                .frame(width: 65.0, height: 35.0)
                                .font(.system(size: 44, weight: .bold))
                                .foregroundColor(.red)
                        }else {
                            Image( tabBarImageNames[num])
                                .resizable()
                                .frame(width: 35.0, height: 35.0)
                                .font(.system(size: 18, weight: .bold))
                                .foregroundColor(selectedIndex == num ? Color(.black) : .init(white: 0.2))
                        }
                        
                        
                        Spacer()
                    })
                    
                }
            }
            
            
        }
    }
}
struct WelcomeModel: View {
    
    
    @Binding var isPresented: Bool
    
    var body: some View {
        VStack {
            Image("logo")
            
            Text("Welcome")
                .font(Font.system(size: 40))
                .font(Font.headline.weight(.heavy))
                .padding()
            
            Text("Tele Health/Mobile applications Informatics Committee Meeting")
                .font(Font.headline.weight(.thin))
                .multilineTextAlignment(.center)
                .font(Font.system(size: 19))
                .padding()
            
            Text("To The New Garnet Health App on IOS")
                .padding()
                .padding()
                .font(Font.system(size: 22))
                .multilineTextAlignment(.center)
                .font(Font.headline.weight(.bold))
                
            
            Text("Testing to begin on 6/30")
                .font(Font.system(size: 22))
                .multilineTextAlignment(.center)
                .font(Font.headline.weight(.bold))
            
            Button(action: {
                self.isPresented = false
            },label: { Text("cancel") })
            .padding()
        }
    }
}
struct LoginViewController: UIViewControllerRepresentable {

    let navController =  UINavigationController()


    func makeUIViewController(context: Context) -> UINavigationController {
        navController.setNavigationBarHidden(true, animated: false)
        let viewController = UIStoryboard.init(name: "Main", bundle: Bundle.main).instantiateViewController(withIdentifier: "LogIn")
        navController.addChild(viewController)
        return navController
    }

    func updateUIViewController(_ pageViewController: UINavigationController, context: Context) {
    }

    func makeCoordinator() -> Coordinator {
        return Coordinator(self)
    }

    class Coordinator: NSObject {
        var parent: LoginViewController

        init(_ loginViewController: LoginViewController) {
            self.parent = loginViewController
        }
    }


}
struct getLogInViewController: UIViewControllerRepresentable {
    func makeUIViewController(context: UIViewControllerRepresentableContext<getLogInViewController>) -> UIViewController {
        let vc = UIStoryboard.init(name: "Main", bundle: Bundle.main).instantiateViewController(withIdentifier: "LogIn")
        return vc
    }
    
    func updateUIViewController(_ uiViewController: UIViewController, context: UIViewControllerRepresentableContext<getLogInViewController>) {
    
    }
    
    
    
   
}
struct PageViewController: UIViewControllerRepresentable {
    func makeUIViewController(context: UIViewControllerRepresentableContext<PageViewController>) -> MainLayoutViewController {
        return MainLayoutViewController()
    }
    
    func updateUIViewController(_ uiViewController: MainLayoutViewController, context: UIViewControllerRepresentableContext<PageViewController>) {
    
    }
    
    
    
   
}
struct AppiontmentViewController: UIViewControllerRepresentable {
    
    
    func makeUIViewController(context: UIViewControllerRepresentableContext<AppiontmentViewController>) -> ScheduleAppViewController {
        return ScheduleAppViewController()
    }
    
    func updateUIViewController(_ uiViewController: ScheduleAppViewController, context: UIViewControllerRepresentableContext<AppiontmentViewController>) {
    
    }
    
    
    
   
}
struct NewsGetViewController: UIViewControllerRepresentable {
    
    
    func makeUIViewController(context: UIViewControllerRepresentableContext<NewsGetViewController>) -> NewsViewController {
        return NewsViewController() 
    }
    
    func updateUIViewController(_ uiViewController: NewsViewController, context: UIViewControllerRepresentableContext<NewsGetViewController>) {
    
    }
    
    
    
   
}
struct DirectionViewController: UIViewControllerRepresentable {
    
    
    func makeUIViewController(context: UIViewControllerRepresentableContext<DirectionViewController>) -> LocationViewController {
        return LocationViewController()
    }
    
    func updateUIViewController(_ uiViewController: LocationViewController, context: UIViewControllerRepresentableContext<DirectionViewController>) {
    
    }
    
    
    
   
}
struct SecondView_Previews: PreviewProvider {
    
    static var previews: some View {
        SecondView()
    }
}
class Main: UIHostingController<SecondView>{
    
    required init?(coder: NSCoder) {
            super.init(coder: coder,rootView: SecondView());
        }

        override func viewDidLoad() {
            super.viewDidLoad()
        }
    @IBAction func fUserName(_ sender: Any) {
        let vc = UIStoryboard.init(name: "HomeScreen", bundle: Bundle.main).instantiateViewController(withIdentifier: "fUserName")
        self.navigationController?.pushViewController(vc, animated: true)
    }
}






    /*
    // MARK: - Navigation

    // In a storyboard-based application, you will often want to do a little preparation before navigation
    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        // Get the new view controller using segue.destination.
        // Pass the selected object to the new view controller.
    }
    */




