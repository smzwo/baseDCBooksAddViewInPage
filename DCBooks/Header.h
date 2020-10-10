//
//  Header.h
//  DCBooks
//
//  Created by cheyr on 2018/3/14.
//  Copyright © 2018年 cheyr. All rights reserved.
//

#ifndef Header_h
#define Header_h


#endif /* Header_h */

#import "DCFileTool.h"

#define kScreenBounds [UIScreen mainScreen].bounds
#define kScreenSize [UIScreen mainScreen].bounds.size
#define kScreenW [UIScreen mainScreen].bounds.size.width
#define kScreenH [UIScreen mainScreen].bounds.size.height
#define is5_8inches ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1125, 2436), [[UIScreen mainScreen] currentMode].size) : NO)
#define kContentSize     CGSizeMake(kScreenW - 20, kScreenH - 90)

#define toolH is5_8inches?84:64
//字体
#define DCDefaultTextFontName @"PingFang SC"
#define DCDefaultTextFontSize 20
#define DCDefaultTextFont [UIFont fontWithName:DCDefaultTextFontName size:DCDefaultTextFontSize]
//NSUserDefault
#define DCReadMode @"DCReadMode"//阅读模式
#define DCReadDefaultMode @"DCReadDefaultMode"//默认模式（白天）
#define DCReadNightMode @"DCReadNightMode"//夜间模式
#define DCTextFontSize @"DCTextFontSize"
#define DCCurrentPage @"DCCurrentPage"
#define DCBooksPath  [[DCFileTool getDocumentPath] stringByAppendingPathComponent:@"mybooks"] //书籍存放目录

