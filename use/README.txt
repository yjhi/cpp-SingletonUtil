      
///����Ӧ�õ���
[DllImport("SingletonUtil.dll")]
public static extern bool SetSingleApp(string lockstr);

///����Ӧ�õ������ҵڶ��ε��ҳ��չʾ
[DllImport("SingletonUtil.dll")]
public static extern bool SetSingleAndTopApp(string lockstr,string title,int type);








bool allowRun = Utils.SetSingleApp("AFARSOFT-WPOS");

            if (!allowRun)
            {
                Shutdown();
                return;
            }