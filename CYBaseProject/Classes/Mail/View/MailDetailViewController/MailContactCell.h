//
//  MailContactCell.h
//  GXMoblieOA
//
//  Created by YYang on 16/3/23.
//  Copyright © 2016年 YYang. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger,MailAccessoryType) {
    MailAccessoryTypeNone,
    MailAccessoryTypeFold,
    MailAccessoryTypeUnfold
};

@interface MailContactCellModel : NSObject

@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *content;

@end

@interface MailContactCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (weak, nonatomic) IBOutlet UILabel *contentLabel;
@property (nonatomic, assign) MailAccessoryType mailAccessoryType;

@property (strong, nonatomic) MailContactCellModel *model;

@end
