//
//  graCreateBeaconNameTableViewController.h
//  beaconReminderDemo
//
//  Created by li lin on 3/21/14.
//  Copyright (c) 2014 li lin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "iBeaconUser.h"
@interface graCreateBeaconNameTableViewController : UITableViewController
@property (nonatomic, strong) void (^nameChanged)(CLBeacon *);
@end
