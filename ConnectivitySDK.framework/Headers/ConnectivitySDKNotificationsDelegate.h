//
//  ConnectivitySDKNotificationsDelegate.h
//  ConnectivitySDK
//
//  Created by Pablo Rueda on 19/10/16.
//  Copyright © 2016 Fon. All rights reserved.
//

@import Foundation;
@import WisprSDK;
#import "FCNSession.h"

/**
 Delegate to receive notifications of the different connection steps.
 */
@protocol ConnectivitySDKNotificationsDelegate <NSObject>

@optional

/**
 Notifies of a login success.

 @param networkInfo Network that succeded to connect.
 */
- (void)onLoginSuccess:(FWRNetworkInfo *)networkInfo;

/**
 Notifies of a login error after executing wispr login.

 @param result FWRWisprResult object with errors codes.
 @param networkInfo Network failed to connect.
 */
- (void)onLoginError:(FWRWisprResult *)result networkInfo:(FWRNetworkInfo *)networkInfo;

/**
 Notifies when the network was already connected before executing wispr login.

 @param networkInfo Network that was already connected.
 */
- (void)onAlreadyConnected:(FWRNetworkInfo *)networkInfo;

/**
 Notifies of a login error before or during executing wispr login.

 @param result FWRWisprResult object with errors codes.
 @param networkInfo Network failed to connect.
 */
- (void)onInternalError:(FWRWisprResult*)result networkInfo:(FWRNetworkInfo *)networkInfo;

/**
 Notifies of a login success when no wispr login is needed.

 @param networkInfo Network that succeded to connect.
 @param command The command that we are handling.
 */
- (void)onConnectedToNetwork:(FWRNetworkInfo *)networkInfo command:(NEHotspotHelperCommand *)command;

/**
 Notifies of a maintain command. It is called every 5 minutes.

 @param networkInfo Network that launched the maintain command.
 */
- (void)onMaintain:(FWRNetworkInfo *)networkInfo;

/**
  Notifies of an evaluate command.

 @param networkInfo Network that launched the evaluate command.
 */
- (void)onEvaluate:(FWRNetworkInfo *)networkInfo;

/**
 Notifies last Session
 
 @param session Last Session Info.
 */
-(void) lastSession:(FCNSession *)session;
@end
