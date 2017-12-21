//
//  FCNNetworkRulesManager.h
//  ConnectivitySDK
//
//  Created by Pablo Rueda on 20/10/16.
//  Copyright © 2016 Fon. All rights reserved.
//

#import <Foundation/Foundation.h>
@import WisprSDK;

/**
 Manager that controls the rules applied for connecting to networks.
 */
@interface FCNNetworkRulesManager : NSObject

/**
 Array of FCNManagedNetwork objects with the managed networks that contains the rules applied to connect.
 */
@property (strong, nonatomic, readonly) NSArray *managedNetworks;

/**
 Initialize the networkRulesManager with the rules to connect to networks.
 
 @param managedNetworks Array of FCNManagedNetwork objects with the managed networks that contains the rules applied to connect.
 */
- (void)initializeManagedNetworksRules:(NSArray *)managedNetworks;

/**
 Indicate if the network is managed by the manager.

 @param networkInfo Network to ask if it is managed.
 @return YES if the network is managed by the manager, NO otherwise.
 */
- (BOOL)isManagedNetwork:(FWRNetworkInfo *)networkInfo;

@end
