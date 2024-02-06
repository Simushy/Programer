using System.DirectoryServices.ActiveDirectory;

namespace Arkusz_or_something
{
    partial class loginAppAS
    {
        /// <summary>
        ///  Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        ///  Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }
        #region scripts
        void validateForm()
        {
            string email = textBoxEmail.Text;
            string password = textBoxPassword.Text;
            string passwordRepeat = textBoxPasswordRepeat.Text;
            if(!email.Contains("@"))
            { labelAnnouncement.Text = "Nieprawidłowy adres e-mail"; }
            else if(passwordRepeat != password)
            {
                labelAnnouncement.Text = "Hasła się różnią";
            }
            else
            {
                labelAnnouncement.Text = $"Witaj {email}";
            }
        }
        #endregion
        #region Windows Form Designer generated code

        /// <summary>
        ///  Required method for Designer support - do not modify
        ///  the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            labelRegister = new Label();
            labelEmail = new Label();
            textBoxEmail = new TextBox();
            labelPassword = new Label();
            textBoxPassword = new TextBox();
            label1 = new Label();
            textBoxPasswordRepeat = new TextBox();
            buttonSubmit = new Button();
            labelAnnouncement = new Label();
            SuspendLayout();
            // 
            // labelRegister
            // 
            labelRegister.BackColor = Color.Teal;
            labelRegister.Font = new Font("Segoe UI", 30F, FontStyle.Regular, GraphicsUnit.Point);
            labelRegister.ForeColor = Color.White;
            labelRegister.Location = new Point(0, -1);
            labelRegister.Name = "labelRegister";
            labelRegister.Size = new Size(800, 60);
            labelRegister.TabIndex = 0;
            labelRegister.Text = "Rejestruj konto";
            labelRegister.TextAlign = ContentAlignment.MiddleLeft;
            // 
            // labelEmail
            // 
            labelEmail.AutoSize = true;
            labelEmail.Font = new Font("Segoe UI", 12F, FontStyle.Regular, GraphicsUnit.Point);
            labelEmail.ForeColor = Color.DimGray;
            labelEmail.Location = new Point(0, 69);
            labelEmail.Name = "labelEmail";
            labelEmail.Size = new Size(103, 21);
            labelEmail.TabIndex = 1;
            labelEmail.Text = " Podaj e-mail:";
            // 
            // textBoxEmail
            // 
            textBoxEmail.BackColor = Color.White;
            textBoxEmail.Location = new Point(0, 93);
            textBoxEmail.Name = "textBoxEmail";
            textBoxEmail.Size = new Size(800, 23);
            textBoxEmail.TabIndex = 2;
            // 
            // labelPassword
            // 
            labelPassword.AutoSize = true;
            labelPassword.Font = new Font("Segoe UI", 12F, FontStyle.Regular, GraphicsUnit.Point);
            labelPassword.ForeColor = Color.DimGray;
            labelPassword.Location = new Point(0, 128);
            labelPassword.Name = "labelPassword";
            labelPassword.Size = new Size(96, 21);
            labelPassword.TabIndex = 3;
            labelPassword.Text = " Podaj hasło:";
            // 
            // textBoxPassword
            // 
            textBoxPassword.BackColor = Color.White;
            textBoxPassword.Location = new Point(0, 152);
            textBoxPassword.Name = "textBoxPassword";
            textBoxPassword.Size = new Size(800, 23);
            textBoxPassword.TabIndex = 4;
            textBoxPassword.UseSystemPasswordChar = true;
            // 
            // label1
            // 
            label1.AutoSize = true;
            label1.Font = new Font("Segoe UI", 12F, FontStyle.Regular, GraphicsUnit.Point);
            label1.ForeColor = Color.DimGray;
            label1.Location = new Point(0, 188);
            label1.Name = "label1";
            label1.Size = new Size(114, 21);
            label1.TabIndex = 5;
            label1.Text = " Powtórz hasło:";
            // 
            // textBoxPasswordRepeat
            // 
            textBoxPasswordRepeat.BackColor = Color.White;
            textBoxPasswordRepeat.Location = new Point(0, 212);
            textBoxPasswordRepeat.Name = "textBoxPasswordRepeat";
            textBoxPasswordRepeat.Size = new Size(800, 23);
            textBoxPasswordRepeat.TabIndex = 6;
            textBoxPasswordRepeat.UseSystemPasswordChar = true;
            // 
            // buttonSubmit
            // 
            buttonSubmit.Location = new Point(362, 241);
            buttonSubmit.Name = "buttonSubmit";
            buttonSubmit.Size = new Size(75, 23);
            buttonSubmit.TabIndex = 7;
            buttonSubmit.Text = "Zatwierdź";
            buttonSubmit.UseVisualStyleBackColor = true;
            buttonSubmit.Click += buttonSubmit_Click;
            // 
            // labelAnnouncement
            // 
            labelAnnouncement.AutoSize = true;
            labelAnnouncement.ForeColor = SystemColors.ControlDarkDark;
            labelAnnouncement.Location = new Point(345, 277);
            labelAnnouncement.Name = "labelAnnouncement";
            labelAnnouncement.Size = new Size(109, 15);
            labelAnnouncement.TabIndex = 8;
            labelAnnouncement.Text = "Autor: 00000000000";
            // 
            // loginAppAS
            // 
            AutoScaleDimensions = new SizeF(7F, 15F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(800, 450);
            Controls.Add(labelAnnouncement);
            Controls.Add(buttonSubmit);
            Controls.Add(textBoxPasswordRepeat);
            Controls.Add(label1);
            Controls.Add(textBoxPassword);
            Controls.Add(labelPassword);
            Controls.Add(textBoxEmail);
            Controls.Add(labelEmail);
            Controls.Add(labelRegister);
            Name = "loginAppAS";
            Text = "loginAppAS";
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private Label labelRegister;
        private Label labelEmail;
        private TextBox textBoxEmail;
        private Label labelPassword;
        private TextBox textBoxPassword;
        private Label label1;
        private TextBox textBoxPasswordRepeat;
        private Button buttonSubmit;
        private Label labelAnnouncement;
    }
}