const path = require('path');
const webpack = require('webpack');
const HtmlWebpackPlugin = require('html-webpack-plugin');

const outputDir = path.join(__dirname, "build/");

module.exports = {
    entry: './_build/default/src/App.bs.js',
    mode: process.env.NODE_ENV === 'production' ? 'production' : 'development',
    output: {
        path: outputDir,
        filename: 'index.js',
    },
    plugins: [
        new HtmlWebpackPlugin({
            template: 'index.html',
            inject: false,
        }),
    ],
    devServer: {
        static: {
            directory: outputDir
        }
    },
};