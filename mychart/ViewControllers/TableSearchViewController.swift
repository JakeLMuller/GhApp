//
//  TableSearchViewController.swift
//  mychart
//
//  Created by Garnet Health on 6/29/21.
//

import UIKit

class TableSearchViewController:UITableViewController, UISearchResultsUpdating {
    
    let tableData = ["Account Settings",  "Billing Summary", "Coverage Details",  "Document Center", "Estimates", "Garnet Health Directions", "Garnet Health News & Blog", "Garnet Health Find a Doc", "Health Summary",  "Insurance", "Letters", "Link My Accounts",  "Medications", "Messages", "Personalize", "Questionnaires", "Schedule An Appointment", "Share Everywhere","Telemed", "Test Results" ]
    var tableArrayData : Array = [["txtMenu":"Account Settings", "index":4],["txtMenu":"Billing Summary", "index":2],["txtMenu":"Coverage Details", "index":5],["txtMenu":"Document Center", "index":6],["txtMenu":"Estimates", "index":8],["txtMenu":"Garnet Health Directions", "index":17],["txtMenu":"Garnet Health News & Blog", "index":18],["txtMenu":"Garnet Health Find a Doc", "index":19],["txtMenu":"Health Summary", "index":10],["txtMenu":"Insurance", "index":5],["txtMenu":"Letters", "index":9],["txtMenu":"Link My Accounts", "index":11],["txtMenu":"Medications", "index":12],["txtMenu":"Messages", "index":14],["txtMenu":"Personalize", "index":13],["txtMenu":"Questionnaires", "index":15],["txtMenu":"Schedule An Appointment", "index":7],["txtMenu":"Share Everywhere", "index":16],["txtMenu":"Telemed", "index":22],["txtMenu":"Test Results", "index":3]  ]
    var filteredTableData = [String]()
    var resultSearchController = UISearchController()
 
    func updateSearchResults(for searchController: UISearchController) {
        filteredTableData.removeAll(keepingCapacity: false)
        
        let searchPredicate = NSPredicate(format: "SELF CONTAINS[c] %@", searchController.searchBar.text!)
        let array = (tableData as NSArray).filtered(using: searchPredicate)
        filteredTableData = array as! [String]
        self.tableView.reloadData()
    }
 
 
    override func viewDidLoad() {
        super.viewDidLoad()
        resultSearchController = ({
            let controller = UISearchController(searchResultsController: nil)
            controller.searchResultsUpdater = self
            controller.dimsBackgroundDuringPresentation = false
            controller.searchBar.sizeToFit()
            
            tableView.tableHeaderView = controller.searchBar
            
            self.definesPresentationContext = true
            return controller
        })()
        
        // Reload the table
        tableView.reloadData()
    }
    func willPresentSearchController(searchController: UISearchController) {
        self.navigationController?.navigationBar.isTranslucent = true
    }

    func willDismissSearchController(searchController: UISearchController) {
        self.navigationController?.navigationBar.isTranslucent = false
    }
    // MARK: - Table view data source

    override func numberOfSections(in tableView: UITableView) -> Int {
        // return the number of sections
        return 1
    }

    override func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        // return the number of rows
        if  (resultSearchController.isActive) {
            return filteredTableData.count
        } else {
            return tableData.count
        }
    }
 
    override func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        let cell = tableView.dequeueReusableCell(withIdentifier: "Cell", for: indexPath)
        
        if (resultSearchController.isActive) {
            cell.textLabel?.text = filteredTableData[indexPath.row]
            
            return cell
        }
        else {
            cell.textLabel?.text = tableData[indexPath.row]
            return cell
        }
    }
    override func tableView(_ tableView: UITableView, didSelectRowAt indexPath: IndexPath) {
        var cellName = ""
        if (resultSearchController.isActive) {
            cellName =   filteredTableData[indexPath.row]
            
        }else{
            cellName =   tableData[indexPath.row]
        }
        for dataOption in tableArrayData {
            let getName = dataOption["txtMenu"] as! String
            let getIndex = dataOption["index"] as! Int
            if (getName == cellName){
                MyChartVcs(Index: getIndex)
            }
        }
    }
    
}
