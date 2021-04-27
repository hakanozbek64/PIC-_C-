using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace serihaberleşme1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        
        private void button1_Click(object sender, EventArgs e)
        {
            if (!serialPort1.IsOpen) 
            {
                serialPort1.Open();
            }
            string veri = textBox1.Text;
            serialPort1.WriteLine(veri);
            
            
        }

        
    }
}
