//
//  WQGameIconLabel.h
//  TestTextKit
//
//  Created by December on 16/3/1.
//  Copyright © 2016年 anzogame. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WQGameIconLabel : UIView
@property(nonatomic,assign)IBInspectable NSUInteger numberOfLines;
@property(nonatomic,strong)IBInspectable UIFont *font;
@property(nonatomic,strong)IBInspectable UIColor *textColor;
@property(nonatomic,assign)IBInspectable CGFloat lineSpace;
@property(nonatomic,assign)IBInspectable CGFloat preferredMaxLayoutWidth;
@property(nonatomic,strong)IBInspectable NSString *text;
@property(nonatomic,readonly)CGFloat firstLineStringWidth;
-(void)addIconURLs:(NSArray<NSString *> *)urls withIconSize:(CGSize)iconSize;
@end
