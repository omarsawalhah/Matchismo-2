//
//  BaseCardGameViewController.h
//  Matchismo
//
//  Created by Maria on 16.06.13.
//  Copyright (c) 2013 Maria Naschanskaya. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CardMatchingGame.h"
#import "CardGameHistoryViewController.h"
#import "Grid.h"

@interface BaseCardGameViewController : UIViewController

@property (weak, nonatomic) IBOutlet UIView *gridView;
@property (strong, nonatomic) Grid *grid;

@property (strong, nonatomic) NSArray *cardViews;
@property (nonatomic) int flipCount;
@property (weak, nonatomic) IBOutlet UILabel *scoreLabel;

@property (strong, nonatomic) MatchingGame *game;

@property (strong, nonatomic) NSAttributedString *gameHistory;
@property (nonatomic) int cardsCount;

-(void)updateUI;

-(void)newAction:(NSAttributedString *)action;
- (IBAction)flipCard:(id)sender;

@end