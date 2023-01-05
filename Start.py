import streamlit as st

def main():
    st.title("Page")
    menu = ["Home", "Login", "SignUp"]
    choice = st.sidebar.selectbox("Menu", menu)
    if choice == "Home":
        st.subheader("Home")
    elif choice == "Login":
        st.subheader("Login Here")
        username = st.sidebar.text_input("User Name")
        passwrd = st.sidebar.text_input("Password", type="password")
        if st.sidebar.button("Login"):
            st.success("Logged in as {}".format(username))
        
    elif choice == "SignUp":
        st.subheader("Create New Account")

main()
