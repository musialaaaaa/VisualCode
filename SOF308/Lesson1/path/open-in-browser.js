const { exec } = require('child_process');
const args = process.argv.slice(2);
const url = args[0];
const browser = args[1] || 'chrome';

exec(`${browser} "${url}"`, (err) => {
  if (err) {
    console.error(`Error: ${err}`);
    return;
  }
});
