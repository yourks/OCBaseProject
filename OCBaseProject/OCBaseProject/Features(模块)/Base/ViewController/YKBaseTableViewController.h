//
//  YKBaseTableViewController.h
//  OCProjectPattern
//
//  Created by Apple on 17/4/12.
//  Copyright © 2017年 YoursKing. All rights reserved.
//

#import "YKBaseViewController.h"

@interface YKBaseTableViewController : YKBaseViewController

@property (nonatomic,strong) UITableView *tableview;

#pragma mark - 上下拉加载
- (void)removedRefreshing;//去掉上下拉刷新 列表默认添加 如不需要可调用该方法移除
- (void)refresh;//下拉请求
- (void)loadMore;//加载更多
- (void)endRefreshing;//结束刷新
- (void)hideLoadMoreRefreshing;//隐藏加载更多
- (void)showLoadMoreRefreshing;//显示加载更多

//刷新数据
- (void)reloadData;
- (void)requestData;
@end
