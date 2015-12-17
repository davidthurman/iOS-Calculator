//
//  ViewController.h
//  Calculator
//
//  Created by David Thurman on 12/17/15.
//  Copyright © 2015 David Thurman. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController{

int currentOperation;

float result;
float currentNumber;
}

@property (strong, nonatomic) IBOutlet UILabel *Label;

- (IBAction)ButtonDigit:(id)sender;
- (IBAction)CancelOperation:(id)sender;
- (IBAction)ButtonOperation:(id)sender;

@end

