body {
  /* display: flex; */
  justify-content: center;
  align-items: center;
  height: 100vh;
  margin: 0;
  font-family: "Open Sans", sans-serif;
  background: #222;
  background-image: url("https://source.unsplash.com/1600x900/?landscape");
  background-repeat: no-repeat;
  background-size: cover;
  font-size: 120%;
  transition: all 1.2s;
  overflow-y: hidden;
}
#confirm {
  display: none;
  box-sizing: border-box;
  text-align: center;
  background: #8b828254;
  color: white;
  padding: 2em;
  border-radius: 30px;
  width: 100%;
  max-width: 420px;
}
#confirm button {
  background-color: #49484a;
  color: white;
  border-radius: 8px;
  display: inline-block;
  border-radius: 12px;
  border: 2px solid #49484a;
  padding: 5px;
  text-align: center;
  width: 100px;
  cursor: pointer;
}
#confirm .message {
  text-align: left;
}
.c {
  margin-left: -40px;
}
.f {
  margin-left: -70px;
}
.card {
  margin-left: 35%;
  position: relative;
  background: #000000d0;
  color: white;
  padding: 2em;
  border-radius: 30px;
  width: 100%;
  max-width: 420px;
  margin-top: 3em !important;
}

.search {
  display: flex;
  align-items: center;
  justify-content: center;
}

#switch {
  margin: 0.5em;
  border-radius: 50%;
  border: none;
  height: 44px;
  width: 44px;
  outline: none;
  background: #7c7c7c2b;
  color: white;
  cursor: pointer;
  transition: 0.2s ease-in-out;
}

input.search-bar {
  border: none;
  outline: none;
  padding: 0.4em 1em;
  border-radius: 24px;
  background: #7c7c7c2b;
  color: white;
  font-family: inherit;
  font-size: 105%;
  width: calc(100% - 100px);
}

button {
  box-shadow: inset 0 0 0 0 red;
  transition: ease-in-out 0.9s;
}

button:hover {
  background: #7c7c7c6b;
  box-shadow: inset 150px 0 0 0 red;
}

h1.temp {
  margin: 0;
  margin-bottom: 0.4em;
}
h1.temp-F {
  margin: 0;
  margin-bottom: 0.4em;
}

.flex {
  display: flex;
  align-items: center;
}

.description {
  text-transform: capitalize;
  margin-left: 8px;
}

.weather {
  display: flex;
  flex-direction: row;
  justify-content: space-between;
  flex-wrap: wrap;
  padding: 4px;
  margin: 6.9px;
}
.flexnew {
  display: flex;
  flex-direction: row;
  flex-wrap: wrap;
  /* margin:10px; */
}
.city {
  display: flex;
  align-items: center;
  justify-content: space-around;
}
.weather.loading {
  visibility: hidden;
  max-height: 20px;
  position: relative;
}

.weather.loading:after {
  visibility: visible;
  content: "Loading...";
  color: white;
  position: absolute;
  top: 0;
  left: 20px;
}

.switch {
  position: relative;
  display: inline-block;
  width: 60px;
  height: 30px;
  /* margin-bottom: 15px; */
  margin-right: 25px;
  margin-bottom: 40px;
}
.switch input {
  opacity: 0;
  width: 0;
  height: 0;
}
.slider {
  position: absolute;
  cursor: pointer;
  top: 0;
  left: 0;
  right: 0;
  bottom: 0;
  background-color: rgb(114, 112, 112);
  -webkit-transition: 0.4s;
  transition: 0.4s;
}
.slider:before {
  position: absolute;
  content: "";
  height: 22px;
  width: 26px;
  left: 4px;
  bottom: 4px;
  background-color: white;
  -webkit-transition: 0.4s;
  transition: 0.4s;
}

input:checked + .slider {
  background-color: #2196f3;
}
input:focus + .slider {
  box-shadow: 0 0 1px #2196f3;
}
input:checked + .slider:before {
  -webkit-transform: translateX(26px);
  -ms-transform: translateX(26px);
  transform: translateX(26px);
}

.fahrenheit {
  display: none;
  color: white;
}
.celsius,
.fahrenheit {
  color: black;
  position: absolute;
  transform: translate(-50%, -50%);
  top: 50%;
  left: 140%;
  font-size: 15px;
  font-family: Verdana, sans-serif;
}

input:checked + .slider .fahrenheit {
  display: block;
}
input:checked + .slider .celsius {
  display: none;
}

.slider.round {
  border-radius: 34px;
}
.slider.round:before {
  border-radius: 50%;
}

.toggle-btn {
  position: fixed;
  right: 1rem;
  top: 1rem;
  padding: 20px;
  cursor: pointer;
}

.contrast {
  padding: 20px;
  border-radius: 15px;
  background-color: #222;
}

.darkmode {
  filter: invert(1);
}
.light-mode {
  background-color: rgba(255, 255, 255, 0.922);
  color: black;
  opacity: 90%;
}
#toggler {
  background-color: black;
  color: white;
  position: fixed;
  top: 10%;
  right: 10%;
}

input.change {
  color: black;
}
h2 {
  margin-top: 5px;
  margin: 8px;
}
h1.temp {
  margin-top: 5px;
  margin: 8px;
  margin-bottom: 40px;
}
.description,
.humidity,
.wind,
#time {
  margin: 8px;
}
/* .centir 
{
  display: flex;
  align-items: center;
  justify-content: space-between;
  flex-direction: row;
} */

footer {
  margin-top: 32px;
    position: relative;
    width: 100%;
    background-color: #4e3f3fad;
    color: white;
    bottom: 0;
    text-align: center;
  }
  .foot{
    display: flex;
    flex-direction: column;
    align-items: center;
    margin: 0.2rem 0;
    gap: 0.3rem;
  }
  
  .icons ul {
    display: flex;
    margin: 0.7rem 0;
    padding: 0;
  }
  
  .icons ul li {
    list-style: none;
  }
  
  .icons ul li a {
    display: block;
    position: relative;
    width: 35px;
    height: 35px;
    background-color: #fff;
    text-align: center;
    line-height: 20px;
    font-size: 20px;
    margin: 0 0 0 20px;
    padding-top: 3px;
    border-radius: 50%;
    z-index: 1;
    border: 2px solid #fff;
  }
  
  .icons ul li a .icon {
    position: relative;
    color: #262626;
    transition: 0.5s;
    z-index: 3;
  }
  footer p {
    margin-top: -15px;
    margin-left: 4px;
    align-items: center;
  }
  .icons ul li a:hover{
    background-color: red;
    border: 2px solid red;
  }
  .icons ul li a .icon:hover{
    color: #fff;
  }
  
  @media (max-width:800px)
  {
    .card {
      margin-left: 10%;
  }
  footer p{
    margin-top: -13px;
  }
  .icons ul li a {
    width: 28px;
    height: 26px;
    margin-top: -6px;
  }
  }
