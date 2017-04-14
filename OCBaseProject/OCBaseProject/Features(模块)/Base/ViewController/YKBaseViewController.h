//
//  YKBaseViewController.h
//  OCProjectPattern
//
//  Created by Apple on 17/4/12.
//  Copyright © 2017年 YoursKing. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MJRefresh/MJRefresh.h>

@interface YKBaseViewController : UIViewController

@property (nonatomic,assign) BOOL isRequest;//是否正在请求 默认NO
@property(nonatomic,assign) NSInteger pageIndex;

#pragma mark 公用方法
- (void)requestData;//网络请求
- (void)gotoLoginViewController;//去登陆界面

#pragma mark 界面切换
//不需要传参数的push 只需告诉类名字符串
- (void)pushViewControllerWithName:(id)classOrName;
//回到当前模块导航下的某一个页面
- (void)returnViewControllerWithName:(id)classOrName;
//切到指定模块下
- (void)popToHomePageWithTabIndex:(NSInteger)index completion:(void (^)(void))completion;

#pragma mark - MJRefresh
- (MJRefreshNormalHeader *)setRefreshNormalHeaderParameter:(MJRefreshNormalHeader *)header;
- (MJRefreshBackNormalFooter *)setRefreshBackNormalFooterParameter:(MJRefreshBackNormalFooter *)footer;
- (MJRefreshAutoNormalFooter *)setRefreshAutoNormalFooterParameter:(MJRefreshAutoNormalFooter *)footer;

@end
