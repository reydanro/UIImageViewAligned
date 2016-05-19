//
//  UIImageViewAligned.h
//  awards
//
//  Created by Andrei Stanescu on 7/29/13.
//

#import <UIKit/UIKit.h>

typedef enum
{
    UIImageViewAlignmentMaskCenter = 0,
    
    UIImageViewAlignmentMaskLeft   = 1,
    UIImageViewAlignmentMaskRight  = 2,
    UIImageViewAlignmentMaskTop    = 4,
    UIImageViewAlignmentMaskBottom = 8,
    
    UIImageViewAlignmentMaskBottomLeft = UIImageViewAlignmentMaskBottom | UIImageViewAlignmentMaskLeft,
    UIImageViewAlignmentMaskBottomRight = UIImageViewAlignmentMaskBottom | UIImageViewAlignmentMaskRight,
    UIImageViewAlignmentMaskTopLeft = UIImageViewAlignmentMaskTop | UIImageViewAlignmentMaskLeft,
    UIImageViewAlignmentMaskTopRight = UIImageViewAlignmentMaskTop | UIImageViewAlignmentMaskRight,
    
}UIImageViewAlignmentMask;

typedef UIImageViewAlignmentMask UIImageViewAignmentMask __attribute__((deprecated("Use UIImageViewAlignmentMask. Use of UIImageViewAignmentMask (misspelled) is deprecated.")));

IB_DESIGNABLE

@interface UIImageViewAligned : UIImageView

// This property holds the current alignment
@property (nonatomic) UIImageViewAlignmentMask alignment;

// Properties needed for Interface Builder quick setup
@property (nonatomic) IBInspectable BOOL alignLeft;
@property (nonatomic) IBInspectable BOOL alignRight;
@property (nonatomic) IBInspectable BOOL alignTop;
@property (nonatomic) IBInspectable BOOL alignBottom;

// Make the UIImageView scale only up or down
// This are used only if the content mode is Scaled
@property (nonatomic) BOOL enableScaleUp;
@property (nonatomic) BOOL enableScaleDown;

// Just in case you need access to the inner image view
@property (nonatomic, readonly) UIImageView* realImageView;

@end
