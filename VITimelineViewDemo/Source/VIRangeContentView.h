//
//  VIRangeContentView.h
//  vito
//
//  Created by Vito on 2018/8/31.
//  Copyright © 2018 vito. All rights reserved.
//

#import <UIKit/UIKit.h>
@import CoreMedia;

@class VIRangeContentView;

@protocol VIVideoRangeContentViewDataSource <NSObject>

- (NSInteger)videoRangeContentViewNumberOfImages:(VIRangeContentView *)view;
- (UIImage *)videoRangeContent:(VIRangeContentView *)view imageAtIndex:(NSInteger)index preferredSize:(CGSize)size;

@optional

- (BOOL)videoRangeContent:(VIRangeContentView *)view hasCacheAtIndex:(NSInteger)index;

@end

@interface VIRangeContentView : UIView

@property (nonatomic, strong) id<VIVideoRangeContentViewDataSource> dataSource;

- (void)reloadData;
- (void)updateDataIfNeed;

@end
