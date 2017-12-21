//
//  FCNManagedNetworkRule.h
//  ConnectivitySDK
//
//  Created by Pablo Rueda on 21/10/16.
//  Copyright © 2016 Fon. All rights reserved.
//

@import WisprSDK;

/**
 Protocol that must implement any managed network rule.
 */
@protocol FCNManagedNetworkRule <NSObject>

/**
 Check if the rule is applied for the network passed as parameter.

 @param networkInfo Network to check if the rule is applied.
 @return YES if there is a match, NO otherwise.
 */
- (BOOL)match:(FWRNetworkInfo *)networkInfo;

@end
