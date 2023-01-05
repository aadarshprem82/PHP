import streamlit as st
import math
import random
import smtplib

OTP = ""
def OTP_generation(user_name, pass_word):
        #OTP generation
        global OTP
        dig = "0123456789"
        for i in range(6):
            OTP += dig[math.floor(random.random()*10)]
            
        gen_OTP = "Welcome to \"Title\" \nPlease verify your,\nEmail Id : " + username + "\nPassword : " + pass_word + " \nwith this OTP : " + OTP + "."
        msg = gen_OTP
        smtp = smtplib.SMTP('smtp.gmail.com',587)
        smtp.starttls()
        smtp.login("aadarshprem82@gmail.com","icyekhmzqjncxpqd")
        smtp.sendmail('Aadarsh',user_email,msg)
        
def verification(temp):
    global OTP
    if temp == OTP:
        return True
    else:
        return False
def main():
    st.title("Page")
    menu = ["Home", "Login", "SignUp"]
    choice = st.sidebar.selectbox("Menu", menu)
    if choice == "Home":
        st.subheader("Home")
    elif choice == "Login":
        st.subheader("Login Here")
        username = st.text_input("Email ID")
        passwrd = st.text_input("Password", type="password")
        if st.button("Login"):
            st.success("Logged in as {}".format(username))
        
    elif choice == "SignUp":
        st.subheader("Create New Account")
        username = st.text_input("Email ID")
        passwrd = st.text_input("Password", type="password")
        if st.button("Sign Up"):
            OTP_generation(username)
            get_otp = st.text_input("OTP")
            if verifcation(get_otp):
                st.success("Verified Successfully")
            else:
                st.warning("Some Error")
                

main()
