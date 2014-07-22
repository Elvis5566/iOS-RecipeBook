//
//  RecipeDetailViewController.h
//  RecipeBook
//
//  Created by elvislee on 7/22/14.
//  Copyright (c) 2014 elvislee. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RecipeDetailViewController : UIViewController
@property (nonatomic, strong) IBOutlet UILabel *recipeLabel;
@property (nonatomic, strong) NSString *recipeName;

@end
