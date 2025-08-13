<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8" />
  <meta name="viewport" content="width=device-width, initial-scale=1" />
  <title>Portfolio • Your Name</title>
  <meta name="description" content="Modern, responsive developer/designer portfolio" />
  <link rel="preconnect" href="https://fonts.googleapis.com">
  <link rel="preconnect" href="https://fonts.gstatic.com" crossorigin>
  <link href="https://fonts.googleapis.com/css2?family=Inter:wght@300;400;500;600;700;800;900&display=swap" rel="stylesheet">
  <style>
    :root{
      --bg:#0b1020; --panel:#0f152b; --panel-2:#121a36; --txt:#e8eaf6; --muted:#aab3cf; --brand:#7c5cff; --brand-2:#24e3ff; --ring:rgba(124,92,255,.4);
      --shadow: 0 10px 25px rgba(0,0,0,.35), inset 0 1px 0 rgba(255,255,255,.02);
      --radius: 18px;
    }
    *{box-sizing:border-box}
    html,body{margin:0;height:100%;scroll-behavior:smooth}
    body{font-family:Inter,system-ui,-apple-system,Segoe UI,Roboto,Arial,Apple Color Emoji,Segoe UI Emoji;background: radial-gradient(1200px 600px at 80% -10%, rgba(36,227,255,.12), transparent 50%), radial-gradient(900px 600px at -10% 10%, rgba(124,92,255,.15), transparent 50%), var(--bg); color:var(--txt)}
    a{color:inherit;text-decoration:none}
    .container{max-width:1100px;margin:0 auto;padding:20px}
    header{position:sticky;top:0;z-index:50;background:linear-gradient(180deg, rgba(11,16,32,.9), rgba(11,16,32,.6) 70%, transparent);backdrop-filter: blur(8px)}
    nav{display:flex;align-items:center;justify-content:space-between;gap:16px;padding:10px 0}
    .brand{display:flex;align-items:center;gap:10px;font-weight:800;letter-spacing:.2px}
    .logo{width:36px;height:36px;border-radius:12px;background: linear-gradient(135deg,var(--brand),var(--brand-2));box-shadow:0 4px 12px var(--ring)}
    .nav-links{display:flex;gap:14px;flex-wrap:wrap}
    .nav-links a{padding:10px 14px;border-radius:12px;color:var(--muted)}
    .nav-links a:hover, .nav-links a:focus{outline:none;background:rgba(255,255,255,.04);color:var(--txt)}
    .btn{display:inline-flex;align-items:center;gap:10px;padding:12px 16px;border-radius:14px;background:linear-gradient(135deg,var(--brand),var(--brand-2));box-shadow:0 10px 25px rgba(124,92,255,.25);border:0;color:white;font-weight:700;cursor:pointer}
    .btn.secondary{background:transparent;border:1px solid rgba(255,255,255,.1);color:var(--txt)}

    .hero{display:grid;grid-template-columns:1.2fr .8fr;gap:30px;align-items:center;padding:40px 0}
    .hero-card{background:linear-gradient(180deg, rgba(18,26,54,.75), rgba(18,26,54,.45));border:1px solid rgba(255,255,255,.06);border-radius:var(--radius);padding:26px;box-shadow:var(--shadow);position:relative;overflow:hidden}
    .hero h1{font-size:clamp(28px,4.2vw,54px);line-height:1.1;margin:0 0 14px}
    .hero p{color:var(--muted);margin:0 0 22px;font-size:clamp(14px,1.4vw,18px)}
    .badges{display:flex;gap:10px;flex-wrap:wrap}
    .badge{padding:8px 12px;border-radius:999px;background:rgba(124,92,255,.12);color:#cfc8ff;border:1px solid rgba(124,92,255,.35);font-size:12px}
    .glow{position:absolute;inset:-30% -20% auto auto;width:420px;height:420px;background: radial-gradient(closest-side,rgba(124,92,255,.35),transparent 55%);filter:blur(30px);pointer-events:none}
    .stats{display:grid;grid-template-columns:repeat(3,1fr);gap:14px;margin-top:16px}
    .stat{background:linear-gradient(180deg, rgba(18,26,54,.8), rgba(18,26,54,.6));border:1px solid rgba(255,255,255,.06);border-radius:14px;padding:14px;text-align:center}
    .stat b{font-size:22px;display:block}

    .avatar-card{position:relative;display:grid;place-items:center;background:linear-gradient(180deg, rgba(18,26,54,.6), rgba(18,26,54,.35));border:1px solid rgba(255,255,255,.06);border-radius:var(--radius);padding:18px;min-height:360px;overflow:hidden}
    .avatar{width:190px;height:190px;border-radius:28px;background:linear-gradient(135deg,#1f2a4b,#2e3d73);border:2px solid rgba(255,255,255,.08);box-shadow:0 12px 30px rgba(0,0,0,.35), inset 0 0 0 3px rgba(255,255,255,.05);position:relative}
    .avatar::after{content:"";position:absolute;inset:auto -20% -25% -20%;height:60%;background: radial-gradient(closest-side, rgba(36,227,255,.25), transparent 60%);filter:blur(20px)}
    .floating{position:absolute;inset:auto 12px 12px auto;display:flex;flex-direction:column;gap:10px}
    .chip{padding:10px 12px;border-radius:12px;background:rgba(255,255,255,.04);border:1px solid rgba(255,255,255,.08);backdrop-filter: blur(6px);font-size:12px}

    section{padding:40px 0}
    .section-title{display:flex;align-items:center;justify-content:space-between;margin-bottom:18px}
    .section-title h2{margin:0;font-size:clamp(20px,2.8vw,30px)}
    .grid{display:grid;grid-template-columns:repeat(12,1fr);gap:16px}
    .col-4{grid-column: span 4}
    .col-6{grid-column: span 6}
    .col-12{grid-column: span 12}

    .card{background:linear-gradient(180deg, rgba(18,26,54,.72), rgba(18,26,54,.5));border:1px solid rgba(255,255,255,.06);border-radius:16px;box-shadow:var(--shadow);padding:18px;display:flex;flex-direction:column;gap:12px}
    .card .thumb{height:160px;border-radius:12px;background:linear-gradient(135deg, rgba(124,92,255,.3), rgba(36,227,255,.25));border:1px solid rgba(255,255,255,.08)}
    .card h3{margin:4px 0 0}
    .card p{margin:0;color:var(--muted)}
    .tags{display:flex;gap:8px;flex-wrap:wrap}
    .tag{font-size:12px;padding:6px 10px;border-radius:999px;background:rgba(255,255,255,.04);border:1px solid rgba(255,255,255,.08);color:#c9d1ff}

    .skills{display:flex;flex-wrap:wrap;gap:10px}
    .pill{padding:10px 14px;border-radius:999px;background:rgba(255,255,255,.04);border:1px solid rgba(255,255,255,.08)}

    .cta{display:flex;gap:12px;flex-wrap:wrap}

    footer{padding:40px 0;color:var(--muted)}
    .footer-grid{display:grid;grid-template-columns:2fr 1fr 1fr;gap:16px}
    .footer-col a{display:block;padding:6px 0;color:var(--muted)}
    .footer-bottom{display:flex;justify-content:space-between;align-items:center;border-top:1px solid rgba(255,255,255,.08);margin-top:20px;padding-top:16px}

    .contact-form{display:grid;gap:10px}
    .input, textarea{width:100%;padding:12px 14px;border-radius:12px;border:1px solid rgba(255,255,255,.08);background:rgba(255,255,255,.04);color:var(--txt)}

    .notice{font-size:12px;color:var(--muted)}

    @media (max-width: 900px){
      .hero{grid-template-columns:1fr;}
      .grid{grid-template-columns:repeat(6,1fr)}
      .col-4{grid-column: span 6}
      .col-6{grid-column: span 6}
    }
  </style>
</head>
<body>
  <header>
    <div class="container">
      <nav>
        <div class="brand"><div class="logo"></div> <span>Your Name</span></div>
        <div class="nav-links">
          <a href="#projects">Projects</a>
          <a href="#skills">Skills</a>
          <a href="#about">About</a>
          <a href="#contact">Contact</a>
          <button class="btn secondary" id="themeToggle" aria-label="Toggle theme">🌙</button>
          <a class="btn" href="#contact">Hire Me</a>
        </div>
      </nav>
    </div>
  </header>

  <main class="container">
    <section class="hero" id="home">
      <div class="hero-card">
        <span class="glow"></span>
        <div class="badges">
          <span class="badge">Available for freelance</span>
          <span class="badge">Based in India</span>
        </div>
        <h1>Building elegant, high‑performance web experiences.</h1>
        <p>I’m a <b>Front‑End Developer</b> who loves crafting delightful UI, accessible UX, and robust systems. I turn ideas into polished products with clean code and thoughtful design.</p>
        <div class="cta">
          <a class="btn" href="#projects">See Projects</a>
          <a class="btn secondary" href="resume.pdf" download>Download Résumé</a>
        </div>
        <div class="stats">
          <div class="stat"><b>20+</b><span>Projects</span></div>
          <div class="stat"><b>3 yrs</b><span>Experience</span></div>
          <div class="stat"><b>10k+</b><span>Lines of CSS 😄</span></div>
        </div>
      </div>
      <div class="avatar-card">
        <div class="avatar" aria-label="Profile image placeholder"></div>
        <div class="floating">
          <div class="chip">⚡ Performance‑first</div>
          <div class="chip">🛡️ Type‑safe</div>
          <div class="chip">♿ Accessible</div>
        </div>
      </div>
    </section>

    <section id="projects">
      <div class="section-title">
        <h2>Featured Projects</h2>
        <a class="btn secondary" href="https://github.com/" target="_blank" rel="noreferrer">View All ➜</a>
      </div>
      <div class="grid">
        <article class="card col-4">
          <div class="thumb" role="img" aria-label="SaaS dashboard preview"></div>
          <h3>SaaS Analytics Dashboard</h3>
          <p>Interactive charts, role‑based auth, and blazing‑fast tables built with vanilla JS + Web Components.</p>
          <div class="tags">
            <span class="tag">JavaScript</span><span class="tag">Web Components</span><span class="tag">Charts</span>
          </div>
          <div class="cta">
            <a class="btn secondary" href="#">Live</a>
            <a class="btn" href="#">Code</a>
          </div>
        </article>
        <article class="card col-4">
          <div class="thumb" role="img" aria-label="E‑commerce UI preview"></div>
          <h3>E‑commerce UI Kit</h3>
          <p>Responsive components, animations, and accessibility baked in. Designed for rapid prototyping.</p>
          <div class="tags">
            <span class="tag">HTML</span><span class="tag">CSS</span><span class="tag">A11y</span>
          </div>
          <div class="cta">
            <a class="btn secondary" href="#">Live</a>
            <a class="btn" href="#">Code</a>
          </div>
        </article>
        <article class="card col-4">
          <div class="thumb" role="img" aria-label="Mobile app preview"></div>
          <h3>Focus Timer App</h3>
          <p>Pomodoro‑style productivity app with offline support and sleek micro‑interactions.</p>
          <div class="tags">
            <span class="tag">PWA</span><span class="tag">Local Storage</span><span class="tag">Animations</span>
          </div>
          <div class="cta">
            <a class="btn secondary" href="#">Live</a>
            <a class="btn" href="#">Code</a>
          </div>
        </article>
      </div>
    </section>

    <section id="skills">
      <div class="section-title">
        <h2>Skills</h2>
      </div>
      <div class="skills">
        <span class="pill">HTML5</span>
        <span class="pill">CSS3</span>
        <span class="pill">JavaScript</span>
        <span class="pill">TypeScript</span>
        <span class="pill">React</span>
        <span class="pill">Node.js</span>
        <span class="pill">Express</span>
        <span class="pill">MongoDB</span>
        <span class="pill">Git</span>
        <span class="pill">Tailwind</span>
        <span class="pill">Figma</span>
        <span class="pill">Accessibility</span>
      </div>
    </section>

    <section id="about">
      <div class="section-title">
        <h2>About</h2>
      </div>
      <div class="grid">
        <div class="card col-6">
          <h3>Who am I?</h3>
          <p>Developer with a design mindset. I love solving real problems, shipping fast, and polishing the details that make users smile. When I’m not coding, I’m sketching UI ideas or exploring new tech.</p>
          <p class="notice">Tip: replace this text with your story, achievements, hackathons, internships, and notable clients.</p>
        </div>
        <div class="card col-6">
          <h3>Services</h3>
          <ul>
            <li>Web App Development</li>
            <li>Landing Pages & SEO</li>
            <li>Design to Code</li>
            <li>UI Audits & Accessibility</li>
          </ul>
          <div class="cta"><a class="btn" href="#contact">Let’s work together</a></div>
        </div>
      </div>
    </section>

    <section id="contact">
      <div class="section-title">
        <h2>Contact</h2>
      </div>
      <div class="grid">
        <div class="card col-6">
          <h3>Send a message</h3>
          <form class="contact-form" action="mailto:you@example.com" method="post" enctype="text/plain">
            <input class="input" type="text" name="name" placeholder="Your name" required />
            <input class="input" type="email" name="email" placeholder="Email" required />
            <textarea class="input" name="message" rows="5" placeholder="How can I help?" required></textarea>
            <button class="btn" type="submit">Send</button>
          </form>
          <p class="notice">Alternatively, replace the form action with your backend endpoint or use services like Formspre