/* Reset & Base */
* {
  margin: 0;
  padding: 0;
  box-sizing: border-box;
}
body {
  font-family: 'Vazir', Tahoma, sans-serif;
  background-color: #121212;
  color: #eee;
  line-height: 1.6;
  direction: rtl;
  min-height: 100vh;
  display: flex;
  flex-direction: column;
}
a {
  text-decoration: none;
  color: #1db954;
}
a:hover {
  color: #1ed760;
}
header {
  background-color: #000;
  padding: 1rem 2rem;
  box-shadow: 0 2px 5px rgba(0,0,0,0.7);
}
.nav-links {
  display: flex;
  justify-content: center;
  gap: 2rem;
  list-style: none;
}
.nav-links li a {
  color: #eee;
  font-weight: 600;
  padding: 0.5rem 1rem;
  border-radius: 5px;
  transition: background-color 0.3s ease;
}
.nav-links li a.active,
.nav-links li a:hover {
  background-color: #1db954;
  color: #000;
}

main {
  flex: 1;
  padding: 2rem;
  max-width: 1200px;
  margin: 0 auto;
  width: 100%;
}

/* Hero Section */
.hero {
  position: relative;
  background: url('images/candlestick-bg.jpg') center/cover no-repeat;
  height: 450px;
  border-radius: 10px;
  overflow: hidden;
  margin-bottom: 3rem;
}
.hero .overlay {
  position: absolute;
  top: 0; left: 0; right: 0; bottom: 0
