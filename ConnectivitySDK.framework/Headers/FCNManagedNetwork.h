//
//  FCNManagedNetwork.h
//  ConnectivitySDK
//
//  Created by Pablo Rueda on 21/10/16.
//  Copyright © 2016 Fon. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FCNManagedNetworkRule.h"

/**
 Class which defines network rules for a managed network, used to perform SSID association and WISPr authentication.
 */
@interface FCNManagedNetwork : NSObject<NSCoding>

/*!
 @property associationRules
 @abstract Array of CLManagedNetworkRule objects matched against a CLAvailableNetwork to determine if the device shoud associate to that network.
 */
/**
 Array of FCNManagedNetworkRule objects to match against a FWRNetworkInfo to determine if the device shoud associate and connect to that network.
 */
@property NSArray<FCNManagedNetworkRule> *associationRules;

/**
 Network type.
 */
@property (copy, nonatomic) NSString *type;

/**
 Execute match of all association rules against a network.

 @param networkInfo Network to ask if it is managed.
 @return YES if the network is managed, NO otherwise.
 */
- (BOOL)isManagedNetwork:(FWRNetworkInfo *)networkInfo;

@end
