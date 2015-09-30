//
//  PKLoginViewController.h
//  PKIMClient
//
//  Created by 周经伟 on 15/9/30.
//  Copyright (c) 2015年 packy. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PKLoginViewController : UIViewController
@property(strong,nonatomic) IBOutlet UITextField *accountTextField;
@property(strong,nonatomic) IBOutlet UITextField *passwordTextField;

@property(strong,nonatomic) IBOutlet UIButton *loginButton;
@end
