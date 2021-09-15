//
//  SearchAppViewController.swift
//  mychart
//
//  Created by Garnet Health on 6/28/21.
//

import UIKit

class SearchAppViewController: UIViewController, UITableViewDataSource, UITextFieldDelegate, UISearchBarDelegate {
    
    @IBOutlet weak var txtSearchBar: UISearchBar!
    @IBOutlet weak var tblSearchResults: UITableView!
    var fruitsArray:[String] = Array()
    var searchedArray:[String] = Array()
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view, typically from a nib.
        
        fruitsArray.append("Apple")
        fruitsArray.append("Orange")
        fruitsArray.append("Litchi")
        fruitsArray.append("PineApple")
        
        for str in fruitsArray {
            searchedArray.append(str)
        }
        
        tblSearchResults.dataSource = self
        txtSearchBar.delegate = self
    }
    
    //MARK:- UITableViewDataSource
    
    func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        return searchedArray.count
    }
    
    func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        var cell = tableView.dequeueReusableCell(withIdentifier: "cell")
        if cell == nil {
            cell = UITableViewCell(style: .default, reuseIdentifier: "cell")
        }
        cell?.textLabel?.text = searchedArray[indexPath.row]
        return cell!
    }
    
    //MARK:- UItextFieldDelegates
    
    func textFieldShouldClear(_ textField: UITextField) -> Bool {
        txtSearchBar.resignFirstResponder()
        txtSearchBar.text = ""
        self.searchedArray.removeAll()
        for str in fruitsArray {
            searchedArray.append(str)
        }
        tblSearchResults.reloadData()
        return false
    }
    
    func textFieldShouldReturn(_ textField: UITextField) -> Bool {
        if (txtSearchBar.text?.count)! != 0 {
            self.searchedArray.removeAll()
            for str in fruitsArray {
                let range = str.lowercased().range(of: textField.text!, options: .caseInsensitive, range: nil, locale: nil)
                if range != nil {
                    self.searchedArray.append(str)
                }
            }
        }
        tblSearchResults.reloadData()
        return true
    }
    
    
    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }


}

