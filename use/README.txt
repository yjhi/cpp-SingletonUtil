      
///设置应用单例
[DllImport("SingletonUtil.dll")]
public static extern bool SetSingleApp(string lockstr);

///设置应用单例并且第二次点击页面展示
[DllImport("SingletonUtil.dll")]
public static extern bool SetSingleAndTopApp(string lockstr,string title,int type);








bool allowRun = Utils.SetSingleApp("AFARSOFT-WPOS");

            if (!allowRun)
            {
                Shutdown();
                return;
            }