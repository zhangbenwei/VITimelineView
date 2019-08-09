//
//  VIVideoRangeContentView.h
//  vito
//
//  Created by Vito on 2018/8/31.
//  Copyright © 2018 vito. All rights reserved.
//

#import <UIKit/UIKit.h>
@import CoreMedia;
#import "VIRangeContentView.h"

@class VIVideoRangeContentView;


@interface VIVideoRangeContentView : VIRangeContentView

@property (nonatomic, strong) NSOperationQueue *loadImageQueue;


@property (nonatomic) CGSize imageSize;
@property (nonatomic) NSInteger preloadCount;

@end
