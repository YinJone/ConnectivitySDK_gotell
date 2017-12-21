//
//  FCNNetwork.h
//  ConnectivitySDK
//
//  Created by Alejandro Espinosa on 4/7/17.
//  Copyright © 2017 Fon. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FCNNetwork : NSObject

/*!
 * @property SSID
 * @discussion The SSID for the Wi-Fi network.
 */
@property (nonatomic, strong) NSString *SSID;

/*!
 * @property BSSID
 * @discussion The BSSID for the Wi-Fi network.
 */
@property (nonatomic, strong) NSString *BSSID;

/*!
 * @property signalStrength
 * @discussion
 *   The signal strength for the Wi-Fi network. The value lies within
 *   the range 0.0 (weak/no signal) to 1.0 (strong signal).
 */
@property (nonatomic) double signalStrength;

/*!
 * @property secure
 * @discussion Indicates whether the network is secure
 */
@property (nonatomic) BOOL secure;

@end
