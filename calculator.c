<!DOCTYPE html>
<html lang="en">
<head>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1.0">
<title>Simple Calculator</title>
<style>
    body {
        background: #f4f4f4;
        font-family: Arial, sans-serif;
        display: flex;
        height: 100vh;
        justify-content: center;
        align-items: center;
    }
    .calculator {
        background: #222;
        padding: 20px;
        border-radius: 10px;
        box-shadow: 0 4px 10px rgba(0,0,0,0.2);
    }
    input {
        width: 100%;
        height: 60px;
        font-size: 2rem;
        text-align: right;
        margin-bottom: 10px;
        border: none;
        outline: none;
        padding: 5px;
        border-radius: 5px;
    }
    .buttons {
        display: grid;
        grid-template-columns: repeat(4, 70px);
        gap: 10px;
    }
