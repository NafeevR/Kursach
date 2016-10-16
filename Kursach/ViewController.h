//
//  ViewController.h
//  Kursach
//
//  Created by Динара Нафеева on 15.10.16.
//  Copyright © 2016 Динара Нафеева. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UIImagePickerControllerDelegate, UINavigationControllerDelegate>
{
    NSString *path ; 
}
@property (strong, nonatomic) IBOutlet UIImageView *imageView;
- (IBAction)takePhoto:(UIButton *)sender;
- (IBAction)selectPhoto:(UIButton *)sender;



@end

