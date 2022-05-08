# Usage
Start by copying the template (replace `new-project-name` with your project name).
```bash
$ git clone git@github.com:trite/melange-react-template.git new-project-name
$ cd new-project-name
```

Run `npm install` and `esy install` once to get things started.
```bash
$ npm install

added 340 packages, and audited 342 packages in 16s

44 packages are looking for funding
  run `npm fund` for details

found 0 vulnerabilities
```
```bash
$ esy install
info install 0.6.12-dev (using esy.json)
info fetching: done
info installing: done
```

Now you can build the project and run the web server
```bash
$ npm run build

> build
> esy bsb -make-world && webpack

asset index.js 1.12 MiB [emitted] (name: main)
asset index.html 916 bytes [compared for emit]
runtime modules 123 bytes 1 module
modules by path ./node_modules/ 1.08 MiB
  modules by path ./node_modules/react/ 85.5 KiB
    ./node_modules/react/index.js 190 bytes [built] [code generated]
    ./node_modules/react/cjs/react.development.js 85.4 KiB [built] [code generated]
  modules by path ./node_modules/react-dom/ 1000 KiB
    ./node_modules/react-dom/index.js 1.33 KiB [built] [code generated]
    ./node_modules/react-dom/cjs/react-dom.development.js 1000 KiB [built] [code generated]
  modules by path ./node_modules/scheduler/ 17.3 KiB
    ./node_modules/scheduler/index.js 198 bytes [built] [code generated]
    ./node_modules/scheduler/cjs/scheduler.development.js 17.1 KiB [built] [code generated]
modules by path ./_build/default/src/*.js 624 bytes
  ./_build/default/src/App.bs.js 347 bytes [built] [code generated]
  ./_build/default/src/Greeting.bs.js 277 bytes [built] [code generated]
webpack 5.72.0 compiled successfully in 645 ms
```
```bash
$ npm run server

> server
> npx webpack serve

<i> [webpack-dev-server] Project is running at:
<i> [webpack-dev-server] Loopback: http://localhost:8080/
<i> [webpack-dev-server] On Your Network (IPv4): http://172.23.122.185:8080/
<i> [webpack-dev-server] Content not from webpack is served from '/mnt/c/git/new-project-name/build/' directory
asset index.js 1.35 MiB [emitted] (name: main)
asset index.html 916 bytes [emitted]
runtime modules 27.3 KiB 13 modules
modules by path ./node_modules/ 1.23 MiB
  modules by path ./node_modules/webpack-dev-server/client/ 53.4 KiB 12 modules
  modules by path ./node_modules/webpack/hot/*.js 4.3 KiB 4 modules
  modules by path ./node_modules/html-entities/lib/*.js 81.3 KiB 4 modules
  modules by path ./node_modules/react/ 85.5 KiB 2 modules
  modules by path ./node_modules/react-dom/ 1000 KiB 2 modules
  modules by path ./node_modules/scheduler/ 17.3 KiB 2 modules
  ./node_modules/ansi-html-community/index.js 4.16 KiB [built] [code generated]
  ./node_modules/events/events.js 14.5 KiB [built] [code generated]
modules by path ./_build/default/src/*.js 624 bytes
  ./_build/default/src/App.bs.js 347 bytes [built] [code generated]
  ./_build/default/src/Greeting.bs.js 277 bytes [built] [code generated]
webpack 5.72.0 compiled successfully in 966 ms

```

TODO
  * Update `ReactDOM.render` to `createRoot` at some point:
    - "Warning: ReactDOM.render is no longer supported in React 18. Use createRoot instead. Until you switch to the new API, your app will behave as if it's running React 17. Learn more: https://reactjs.org/link/switch-to-createroot"
  * Unit test scaffolding (perhaps in a separate repo).