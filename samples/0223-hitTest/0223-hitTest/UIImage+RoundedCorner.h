//
//  UIImage+RoundedCorner.h
//  0223-hitTest
//
//  Created by pmst on 2020/2/23.
//  Copyright © 2020 pmst. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIImage (RoundedCorder)

@end


@interface UIImageView (RoundedCorder)
- (void)pt_addCorner:(CGFloat)radius;
@end
NS_ASSUME_NONNULL_END

