//
//  ViewController.swift
//  mychart
//
//  Created by Garnet Health on 6/9/21.
//

import UIKit
import SwiftUI





    struct ContentView: View {
        
        init() {
            UITabBar.appearance().barTintColor = .systemBackground
            UINavigationBar.appearance().barTintColor = .systemBackground
        }
        
        @State var selectedIndex = 0
        @State var shouldShowModal = false
        
        let tabBarImageNames = ["logo", "calendar_with_shadow", "heart.circle.fill", "AppointmentArrivalOnboarding", "locationpin_with_shadow"]
        
        var body: some View {
            VStack(spacing: 0) {
                
                ZStack {
                    
                    Spacer()
                        .fullScreenCover(isPresented: $shouldShowModal, content: {
                            Button(action: {shouldShowModal.toggle()}, label: {
                                Text("Fullscreen cover")
                            })
                        
                    })
                    
                    switch selectedIndex {
                    case 0:
                        NavigationView {
                            ScrollView {
                                Button(action: {
                                          print("button pressed")

                                        }) {
                                            Image("banner")
                                            .renderingMode(.original)
                                            .resizable()
                                            .frame(width: UIScreen.main.bounds.width, height: 200.0)
                                        }
                            }
                                .navigationTitle("First Tab")
                        }
                        
                    case 1:
                        ScrollView {
                            Text("TEST")
                        }
                        
                    default:
                        NavigationView {
                            Text("Remaining tabs")
                            
                        }
                    }
                    
                }
                
    //            Spacer()
                
                Divider()
                    .padding(.bottom, 8)
                
                HStack {
                    ForEach(0..<5) { num in
                        Button(action: {
                            
                            if num == 2 {
                                shouldShowModal.toggle()
                                return
                            }
                            
                            selectedIndex = num
                        }, label: {
                            Spacer()
                            
                            if num == 2 {
                                Image(systemName: tabBarImageNames[num])
                                    .font(.system(size: 44, weight: .bold))
                                    .foregroundColor(.red)
                            }else {
                                Image(tabBarImageNames[num])
                                    .font(.system(size: 20, weight: .bold))
                                    .foregroundColor(selectedIndex == num ? Color(.black) : .init(white: 0.8))
                            }
                            
                            
                            Spacer()
                        })
                        
                    }
                }
                
                
            }
        }
    }

    //TabView {
    //    Text("First")
    //        .tabItem {
    //            Image(systemName: "person")
    //            Text("First")
    //        }
    //    Text("Second")
    //        .tabItem {
    //            Image(systemName: "gear")
    //            Text("Second")
    //        }
    //}

struct ContentView_Previews: PreviewProvider {
    static var previews: some View {
        ContentView()
    }
}


class ViewController: UIHostingController<ContentView>{

    required init?(coder: NSCoder) {
            super.init(coder: coder,rootView: ContentView());
        }

        override func viewDidLoad() {
            super.viewDidLoad()
        }
    }
