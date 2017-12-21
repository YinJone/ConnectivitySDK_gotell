//
//  FONSesion.h
//  FonSDK
//
//  Created by Alejandro Espinosa on 3/11/16.
//  Copyright © 2016 Fon. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FCNNetwork.h"

@interface FCNSession : NSObject

@property (nonatomic, strong) FCNNetwork *network;
@property (nonatomic, strong) NSDate *start;
@property (nonatomic, strong) NSDate *end;
@property (nonatomic, strong) NSNumber *bytesDL;
@property (nonatomic, strong) NSNumber *bytesUL;
@property (nonatomic, strong) NSNumber *totalBytesDL;
@property (nonatomic, strong) NSNumber *totalBytesUL;

@end
