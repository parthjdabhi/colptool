//
//  CTFilterCamera.h
//  ColpTool
//
//  Created by Alda Luong on 10/9/14.
//  Copyright (c) 2014 Alda Luong. All rights reserved.
//

#import <Foundation/Foundation.h>
@class GPUImageView;
@class GPUImageVideoCamera;
@class GPUImageStillCamera;

@interface CTFilterCamera : NSObject

- (void)initializeFilterView:(GPUImageView *)filterView;
- (void)setupFilterCamera:(GPUImageView *)filterView;
- (void)setupStillCamera:(GPUImageView *)filterView;
- (void)toggleTorch;
- (void)toggleFilter;
- (void)toggleRecord;
- (void)takePhoto;
- (void)toggleVideoStatus:(BOOL)videoEnabled;

@property (nonatomic, assign) BOOL videoEnabled;
@property (nonatomic, assign) BOOL torchIsOn;
@property (nonatomic, assign) BOOL filterIsOn;
@property (nonatomic, assign) BOOL recording;
@property (nonatomic, strong) GPUImageVideoCamera *videoCamera;
@property (nonatomic, strong) GPUImageStillCamera *stillCamera;

@end
