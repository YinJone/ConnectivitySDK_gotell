//
//  ConnectivitySDK.h
//  ConnectivitySDK
//
//  Created by Pablo Rueda on 19/10/16.
//  Copyright © 2016 Fon. All rights reserved.
//

#import "ConnectivitySDKDelegate.h"
#import "ConnectivitySDKNotificationsDelegate.h"
#import "FCNManagedNetwork.h"
#import "FCNManagedNetworkRule.h"
#import "FCNNetworkInformationManager.h"
#import "FCNNetworkInformationManagerDelegate.h"
#import "FCNNetworkRulesManager.h"
@import CocoaLumberjack;

//! Project version number for ConnectivitySDK.
FOUNDATION_EXPORT double ConnectivitySDKVersionNumber;

//! Project version string for ConnectivitySDK.
FOUNDATION_EXPORT const unsigned char ConnectivitySDKVersionString[];

#undef LOG_LEVEL_DEF
#define LOG_LEVEL_DEF ConnectivitySDKLogLevel
FOUNDATION_EXPORT DDLogLevel const ConnectivitySDKLogLevel;

/**
 Manage hotspot 2.0 connections.
 */
@interface ConnectivitySDK : NSObject

/**
 Manager that controls the rules applied for connecting to networks.
 */
@property (strong, nonatomic) FCNNetworkRulesManager *networkRulesManager;

/**
 Manager with information about the network.
 */
@property (strong, nonatomic) FCNNetworkInformationManager *networkInformationManager;

- (instancetype)initWithDelegate:(id<ConnectivitySDKDelegate>)delegate;

/**
 Register the application as a hotspot helper provided by Apple.

 @param notificationsDelegate Delegate to receive notifications of the different connection steps.
 @param displayName Name to display in all the networks managed that appears in the wifi settings.
 */
- (void)registerConnectivityWithNotificationsDelegate:(id<ConnectivitySDKNotificationsDelegate>)notificationsDelegate
                                          displayName:(NSString *)displayName;

/**
 Stop to manage the connectivity flow.
 */
- (void)unregister;

/**
 Terminate the authentication session for a Hotspot network. If use this method the AutoJoin check change to off.
 */
- (BOOL)logoff;

/**
 Initialize the networkRulesManager with the rules to connect to networks.

 @param managedNetworks Array of FCNManagedNetwork objects with the managed networks that contains the rules applied to connect.
 */
- (void)initializeManagedNetworksRules:(NSArray *)managedNetworks;

@end
