local function compute_hash(filename)
    local f = io.open(filename, "rb")
    if not f then
        return nil
    end
    local hash = sha2.sha256()
    while true do
        local data = f:read(1024)
        if not data then
            break
        end
        hash:update(data)
    end
    f:close()
    return hash:finalize()
end

function check_file_integrity(filename)
    local expected_hash = "d14a028c2a3a2bc9476102bb288234c415a2b01f828ea62ac5b3e42f"
    local actual_hash = compute_hash(filename)
    if not actual_hash then
        return false
    end
    return actual_hash == expected_hash
end
