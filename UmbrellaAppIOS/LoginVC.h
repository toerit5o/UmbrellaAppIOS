//
//  LoginVC.h
//  UmbrellaAppIOS
//
//  Created by ADGERSON GALENO on 15/12/12.
//  Copyright (c) 2012 ADGERSON GALENO. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LoginVC : UITableViewController <UITextFieldDelegate>
@property (strong, nonatomic) IBOutlet UITextField *loginTextField;
@property (strong, nonatomic) IBOutlet UITextField *passTextField;

@end
