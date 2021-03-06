//
//  ZLPhotoPickerBrowserPhotoScrollView.h
//  ZLAssetsPickerDemo
//
//  Created by 张磊 on 14-11-14.
//  Copyright (c) 2014年 com.zixue101.www. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "ZLPhotoPickerBrowserPhotoImageView.h"
#import "ZLPhotoPickerBrowserPhotoView.h"
#import "ZLPhotoPickerBrowserPhoto.h"

@class ZLPhotoPickerBrowserPhotoScrollView;

@protocol ZLPhotoPickerPhotoScrollViewDelegate <NSObject>
@optional
// 单击调用
- (void) pickerPhotoScrollViewDidSingleClick:(ZLPhotoPickerBrowserPhotoScrollView *)photoScrollView;

@end

@interface ZLPhotoPickerBrowserPhotoScrollView : UIScrollView <UIScrollViewDelegate, ZLPhotoPickerBrowserPhotoImageViewDelegate,ZLPhotoPickerBrowserPhotoViewDelegate> {

}

@property () NSUInteger index;
@property (nonatomic) ZLPhotoPickerBrowserPhoto *photo;

@property (nonatomic , weak) id <ZLPhotoPickerPhotoScrollViewDelegate> photoScrollViewDelegate;

- (void)displayImage;
- (void)setMaxMinZoomScalesForCurrentBounds;

@end
