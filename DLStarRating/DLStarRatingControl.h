/*

    DLStarRating
    Copyright (C) 2011 David Linsin <dlinsin@gmail.com> 

    All rights reserved. This program and the accompanying materials
    are made available under the terms of the Eclipse Public License v1.0
    which accompanies this distribution, and is available at
    http://www.eclipse.org/legal/epl-v10.html

 */

#import <UIKit/UIKit.h>

#define kDefaultNumberOfStars 5
#define kNumberOfFractions 10

@protocol DLStarRatingDelegate;

@interface DLStarRatingControl : UIControl {
	int numberOfStars;
	int currentIdx;
	UIImage *star;
	UIImage *highlightedStar;
    BOOL isFractionalRatingEnabled;
}

- (id)initWithFrame:(CGRect)frame;
- (id)initWithFrame:(CGRect)frame andStars:(NSUInteger)_numberOfStars isFractional:(BOOL)isFract;
- (void)setupView;

@property (nonatomic) CGFloat offset;
@property (strong,nonatomic) UIImage *star;
@property (strong,nonatomic) UIImage *highlightedStar;
@property (nonatomic) float rating;
@property (assign,nonatomic) IBOutlet id<DLStarRatingDelegate> delegate;
@property (nonatomic,assign) BOOL isFractionalRatingEnabled;

@end

@protocol DLStarRatingDelegate

-(void)newRating:(DLStarRatingControl *)control :(float)rating;

@end
	