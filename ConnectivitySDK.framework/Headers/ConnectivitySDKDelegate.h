//
//  ConnectivitySDKDelegate.h
//  ConnectivitySDK
//
//  Created by Pablo Rueda on 19/10/16.
//  Copyright © 2016 Fon. All rights reserved.
//

@import Foundation;
@import WisprSDK;

/**
 Delegate of ConnectivitySDK to control connection.
 */
@protocol ConnectivitySDKDelegate <NSObject>

@required

/**
 Credentials to connect to the network.
 
 @return Credentials to connect to the network.
 */
//- (FWRUserCredentials *)userCredentials;

/**
 Return if the URL is secure to connect.
 
 @param loginURLString URL to check.
 
 @return YES if the URL is secure, NO if it is not.
 */
//- (BOOL)isURLLoginSecure:(NSString *)loginURLString network:(FWRNetworkInfo*) networkInfo;

/**
 Model to check if there is internet connection.
 
 @return Model to check if there is internet connection.
 */
//- (FWRCheckInternetData *)evaluateCheckInternetDataContent;

/**
 Indicates if it should connect to the network.

 @param networkInfo Network trying to connect.
 @return YES if it should connect to the network. No in any other case.
 */
- (BOOL)shouldLogin:(FWRNetworkInfo *)networkInfo;

/**
 Indicates if it should execute wispr login for that network.

 @param networkInfo Network trying to execute wispr login.
 @return YES if it should execute wispr login. No in any other case.
 */
- (BOOL)shouldLaunchWisprLogin:(FWRNetworkInfo *)networkInfo;

/**
 Wispr Login Proccess
 
 @param command command Network Extension
 @return FWRWisprResult of wispr
 */
- (FWRWisprResult *)wisprLoginCommand:(NEHotspotHelperCommand *)command;

/**
 Wispr Logoff Proccess
 
 @param command command Network Extension
 @return Bool result logoff
 */
- (BOOL)wisprLogoffCommand:(NEHotspotHelperCommand *)command;

/**
 Indicates if it should manage all networks or neither.

 @return YES if should manage all networks. NO if it should not.
 */
- (BOOL)shouldManageNetworks;

@optional

/**
  Indicates if it should manage the network.

 @param networkInfo Network to check if it should be managed.
 @return YES if it should manage the network. NO if it should not.
 */
- (BOOL)shouldManageNetwork:(FWRNetworkInfo *)networkInfo;


@end
