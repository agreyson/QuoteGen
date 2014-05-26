//
//  QGViewController.h
//  QuoteGen
//
//  Created by Ann Greyson on 2/7/14.
//  Copyright (c) 2014 Ann Greyson. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface QGViewController : UIViewController
@property (nonatomic, strong) IBOutlet UISegmentedControl *quoteOpt;
@property (nonatomic, strong) NSArray *myQuotes;
@property (nonatomic, strong) NSMutableArray *movieQuotes;
@property (nonatomic, weak) IBOutlet UITextView *quoteText;
-(IBAction)quoteButtonTapped:(id)sender;
@end
