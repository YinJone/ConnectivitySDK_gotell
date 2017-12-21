//
//  FCNNetworkInformationManager.h
//  ConnectivitySDK
//
//  Created by Pablo Rueda on 20/10/16.
//  Copyright © 2016 Fon. All rights reserved.
//

#import <Foundation/Foundation.h>
@import WisprSDK;
#import "FCNNetworkInformationManagerDelegate.h"

/**
 Manager with information about the network.
 */
@interface FCNNetworkInformationManager : NSObject

/**
 Get the network that is connected.

 @return Network that is connected or nil if there is no network connected.
 */
- (FWRNetworkInfo *)availableNetwork;

/**
 Indicate if it is associated to any WiFi network.

 @return YES if the phone has WiFi connection, NO otherwise.
 */
- (BOOL)isWiFiConnected;

/**
 Verify if there is internet connection available.
 
 @param command Binds the request to the network with the NEHotspotHelperCommand object.
 
 @return YES if there is internet connection available, NO in any other case.
 */
- (BOOL)isInternetAvailableWithCommand:(NEHotspotHelperCommand *)command;

/**
 Get the type of internet connection the phone is connected.

 @return Type of internet connection the phone is connected.
 */
- (FCNNetworkInterfaceType)networkInterfaceType;

/**
 Indicate if it is associated to any mobile data network.
 
 @return YES if the phone has mobile data network connection, NO otherwise.
 */
- (BOOL)isMobileConnected;

/**
 Delegate to receive information about the network changes.
 */
@property (weak, nonatomic) id<FCNNetworkInformationManagerDelegate> delegate;

@end
