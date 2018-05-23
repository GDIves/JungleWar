using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Assets.Scripts.Model
{
    public class UserData
    {
        public int Userid { get; set; }
        public string Username { get; set; }
        public int Totalcount { get; set; }
        public int Wincount { get; set; }

        public UserData(string username, int totalcount, int wincount)
        {
            this.Username = username;
            this.Totalcount = totalcount;
            this.Wincount = wincount;
        }

        public UserData(int userid, string username, int totalcount, int wincount)
        {
            this.Userid = userid;
            this.Username = username;
            this.Totalcount = totalcount;
            this.Wincount = wincount;
        }

        public UserData(string userData)
        {
            string[] strs = userData.Split(',');
            this.Userid = int.Parse(strs[0]);
            this.Username = strs[1];
            this.Totalcount = int.Parse(strs[2]);
            this.Wincount = int.Parse(strs[3]);
        }
    }
}
