//
//  FCNNetworkInformationManagerDelegate.h
//  ConnectivitySDK
//
//  Created by Pablo Rueda on 20/10/16.
//  Copyright © 2016 Fon. All rights reserved.
//

@import Foundation;

/**
 Type of internet connection the phone is connected.
 */
typedef NS_ENUM(NSUInteger, FCNNetworkInterfaceType) {
    /**
     The phone is not connected to any network.
     */
    FCNNetworkInterfaceTypeNoConnection = 0,
    /**
     The phone has WiFi connection.
     */
    FCNNetworkInterfaceTypeWiFi = 1,
    /**
     The phone has mobile data connection.
     */
    FCNNetworkInterfaceTypeMobileData = 2
};

/**
 Delegate to receive information about the network changes. Sometimes sends two notificatión of change by error of iOS system (Always from airplane mode go to 3G).
 */
@protocol FCNNetworkInformationManagerDelegate <NSObject>

@optional

/**
 Notifiy when network interface changes.

 @param typeNetworkInterface Type of internet connection the phone changed to.
 */
- (void)changeNetworkInterfaceTo:(FCNNetworkInterfaceType)typeNetworkInterface;

/**
  Notifiy when network interface changes to mobile data.
 */
- (void)changeNetworkInterfaceToMobileData;

/**
 Notifiy when network interface changes to WiFi.
 */
- (void)changeNetworkInterfaceToWiFi;

/**
 Notifiy when network interface changes to not connected.
 */
- (void)changeNetworkInterfaceToNone;

@end
