state = {
    angle = 0,
    x = 0,
    y = 0,
    w = 1,
    h = 1
}

function init(w, h)
    log.write(3, "lua", "init " .. w .. " " .. h)
    state.w = w
    state.h = h
end

function tick()
    state.angle = state.angle + 0.01
    if state.angle>=1 then
        state.angle=0
    end
end

function draw()
    log.write(3, "lua", "draw " .. state.x .. " " .. state.y)
    gl.glClearColor(state.x/state.w, state.angle, state.y/state.h, 1);
    gl.glClear(gl.GL_COLOR_BUFFER_BIT);
end

log.write(3, "lua", "running")