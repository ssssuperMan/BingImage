//
//  BICollectionViewCell.h
//  BingImage
//
//  Created by 张声扬 on 2017/5/5.
//  Copyright © 2017年 张声扬. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BIImageModel.h"

@interface BICollectionViewCell : UICollectionViewCell

/** 模型  */
@property (nonatomic, strong)BIImageModel *imageData;

@end
