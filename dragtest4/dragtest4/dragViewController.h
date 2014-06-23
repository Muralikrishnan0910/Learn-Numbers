//
//  dragViewController.h
//  dragtest4
//
//  Created by BSA Univ15 on 23/06/14.
//  Copyright (c) 2014 BSA Univ15. All rights reserved.
//

#import <UIKit/UIKit.h>

#define UIImageWithBundlePNG(x) ([UIImage imageWithContentsOfFile: [[NSBundle mainBundle] pathForResource:[NSString stringWithFormat:(x)] ofType:@"png"]])

@interface dragViewController : UIViewController

@end
